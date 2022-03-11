// (c) Wonkey, 2022 uder BSD 2 Lisence

/* 
    I just came up with the idea of making this into a dating sim.
    First in a console app in C#, than we gatter a large following, then we
    make a game that they will buy for 60$, and that there is ton of DLC for
    and and and...

    I'm only joking, the game would OBV be free, and so would the DLC.
*/

using System;
  
namespace Main {
      
    class program {
          
        static void Main(string[] args) {

            Console.WriteLine("Hello, this is the setup phase!");
            // Wait (1)
            Console.WriteLine("Please write down the information below.");
            Console.WriteLine("(Click to continue)");

            // I haven't written C# code in a while, so please forgive my style.
            Console.ReadLine();
            Console.WriteLine("What is your name?");
            string userName = Console.ReadLine();   // Degenerate's name.

            Console.WriteLine("Wondeful to meet you, " + userName);
            // Wait (1)

            /*  
                (Broken Code)
                Console.WriteLine("What is your gender?");
                string userSex = Console.ReadLine();
            */

            /* 
                Find a way to make choice options, instead of allowing the user
                to make random remarks that would break the code.
            */

            Console.WriteLine("So... How was your day " + userName + "?");
            Console.ReadLine();

            Console.WriteLine("Hmm... Tell me why, darling.");

            /* 
                You know what would be useful Microsoft?
                If I were able to make 'if' and 'then' statements without
                needing to use stupid boolean values.
            */

            /*
            (Still more broken code for later)
            if (userSex == 'female') then
            Console.WriteLine = ("Hey, I have those!");
            */

            Console.ReadLine();
            
            
            Console.ReadKey();
        }
    }
}