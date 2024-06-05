def main():


    try:

        # initialise books list

        bookslist = []

        infile = open("thebookslist.txt", "r")
        line = infile.readline()
        while line:
            bookslist.append(line.rstrip("\n").split(","))
            line.infile.readline()

        infile.close()

    except FileNotFoundError :
        print("the <booklist.txt> file is not found" )
        print("starting a new books list!")

        bookslist = []



    choice = 0
    while choice != 4:

        print("*** Book Manager ***")
        print("1) Add a Book")
        print("2) Look up Book")
        print("3) Display Book")
        print("4) Quit")

        choice = int(input())

        if choice == 1:
            print("Adding A Book ........")
            nbook = input("Enter the name of  the book>>> ")
            nauthor = input("Enter the name of the author >>>")
            npages = input("Enter the Number of pages >>> ")

            bookslist.append([nbook, nauthor, npages])

        elif choice == 2:
            print("Looking for a Book.............")
            keyword = input("Enter the Search Term: ")
            for book in bookslist:
                if keyword in book:
                    print(book)

        elif choice == 3:
            print("Displaying all Books................")
            for i in range(len(bookslist)):
                print(bookslist[i])

        elif choice == 4:
            print("Quitting  program")
        print("Program Terminitaed! ")

        #Saving to exrwenal TXT file

        outfile = open("thebookslist.txt", "w")
        for book in bookslist:
            outfile.write(",".join(book) + "\n")
        outfile.close()





if __name__ == "__main__":
    main()
