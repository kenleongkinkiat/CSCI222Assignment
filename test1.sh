declare FILENAME="./BookDB.txt"

if ! [ -f BookDB.txt ] ; then #check existance of bookdb file, create the file if not exist else continue
touch BookDB.txt
fi


function getBookDB
{
	count=0;

	if ! [-f $FILENAME ]
	then
		touch $FILENAME
		echo "Error finding $FILENAME !"
		exit 0;
	fi


	while IFS=':' read -a line;
	do
		TITLE[$count]=${line[0]};
		AUTHOR[$count]=${line[1]};
		PRICE[$count]=${line[2]};
		qtyAVA[$count]=${line[3]};
		qtySOLD[$count]=${line[4]};
	
		let count++;

	done <$FILENAME

testPrint;

}

function testPrint
{
	for((i=0; $i<count; i++));
	do
		echo "${TITLE[$i]}";
		echo ${TITLE[$i]}:${AUTHOR[$i]}:${PRICE[$i]}:${qtyAVA[$i]}:${qtySOLD[$i]};
	done
}

