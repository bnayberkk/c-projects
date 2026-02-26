#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


void kartal_bekliyor() 
{
     
    printf ("                               /T /I \n");
    printf ("                          T\\ Y  I  |/  /  _ \n");
    printf ("         /T               | \\I  |  I  Y.-~/ \n");
    printf ("        I l   /I       T\\ |  |  l  |  T  / \n");
    printf (" __  | \\l   \\l  \\I l __l  l   \\   `  _. | \n");
    printf (" \\ ~-l  `\\   `\\  \\  \\\\ ~\\  \\   `. .-~   | \n");
    printf ("  \\\\   ~-. \\\"-.  `  \\\\  ^._ ^. \\\"\\-.  /  \\\\   | \n");
    printf (".--~-._  ~-  `  _  ~-_.-\\\"-.\\\" ._ /._ .\\\" ./\n");
    printf (" >--.  ~-.   ._  ~>-"    "\\   7   7   ] \n");
    printf ("^.___~\\\"--._    ~-{  .-~ .  `\\ Y . /    | \n");
    printf (" <__ ~\\\"-.  ~       /_/   \\   \\I  Y   : | \n");
    printf ("   ^-.__           ~(_/   \\   >._:   | l______ \n");
    printf ("       ^--.,___.-~\"  /_/   !  `-.~\"--l_ /     ~\"-. \n");
    printf ("              (_/ .  ~(   /'     \"~\"--,Y   -=b-. _) \n");
    printf ("               (_/ .  \\  :           / l      c\\\"~o \\\\ \n");
    printf ("                \\ /    `.    .     .^   \\_.-~\\\"~--.   ) \n");
    printf ("                 (_/ .   `  /     /       !         )/ \n");
    printf ("                  / / _.   '.   .':      /        ' \n");
    printf ("                  ~(_/ .   /    _  `  .-<_      -Row \n");
    printf ("                    /_/ . ' .-~\\\" `.  / \\\\  \\\\          ,z=. \n");
    printf ("                    ~( /   '  :   | K   \"-.~-.______// \n");
    printf ("                      \"-,.    l   I/ \_    __{--->._(==. \n");
    printf ("                       //(     \\  <    ~\"~\"     // \n");
    printf ("                      /' /\     \  \     ,v=.  (( \n");
    printf ("                    .^. / /\     \"  }__ //===-  ` \n");
    printf ("                   / / ' '  \"-.,__ {---(==- \n");
    printf ("                 .^ '       :  T  ~\"   ll \n");
    printf ("                / .  .  . : | :!        \\ \n");
    printf ("               (_/  /   | | j-\"          ~^ \n");
    printf ("                 ~-<_(_.^-~\" \n");
    printf ("\n");

}

void kartal_indi ()
{
printf("       .-~~``~~-, \n");
printf("      (          \\ \n");
printf("   .--'`-.__,     \\ \n");
printf("  /      |\\O/      | \n");
printf(" |,      /         | \n");
printf(" \\   ,--`\\         | \n");
printf("  `.(   /          \\ \n");
printf("       /            \\ \n");
printf("      / .  ;    :.   \\ \n");
printf("     /__;   \\   | \\   \\ \n");
printf("     /   '. |\\_ /-.'-._\\ \n");
printf("    |      `   `        \\ \n");
printf("    |    /               \\ \n");
printf("    |    |                | \n");
printf("    |    |                \\ \n");
printf("    \\    \\                 | \n");
printf("     \\    |  |   |   \\     \\ \n");
printf("      \\   \\  \\   \\    \\     | \n");
printf("       '.  \\  \\  ' \\   \\     \\ \n");
printf("         \\  \\  `\\   `\\  `\\    \\ \n");
printf("          |  `\\  `\\   `.  '.   \\ \n");
printf("           \\   `-. '._  '-. '._/\\ \n");
printf("            |     \\-._;-._ '-._  \\ \n");
printf("            \\      `\\     `--` `--\\ \n");
printf("             ;_      `-.           | \n");
printf("~==~======~,-.-.-'`;'=~=-.,_   __/=~=~=~~= \n");
printf("  =_ = -_ -( ( ( .-`( ( ( .-``\"`-_ = - _ - \n");
printf("- -   =   - ` ` ` _= ` ` `   =  -  -    = \n");
printf("~~==~=~~==~=~~=~~=~=~==~~=~~==~~=~~=~~~===~~\\ \n");
printf("                         \\ . \\  . '| \\ \n");
printf("                          \\   . .' / \n");
printf("                           '.   \\.'| \n");
printf("                             '-.__/ \n");

}
    
     
     



int main(int argc, char *argv[])
{
    int i;
    kartal_bekliyor ();
    printf ("Geri sayimi baslatmak icin bir tusa basin. \n");
    getch ();
    
        for (i = 5; i >= 0; i--) {
        printf ("%3d\n", i);
        Sleep (500);
    }
    
    system ("cls"); /* ekrani temizler */
    kartal_indi ();
  
  system("PAUSE");	
  return 0;
}
