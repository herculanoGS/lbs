
#include <xc.h>
#include <stdio.h>
#include <stdint.h>

const char *buff = "notnoaaabbbasdfghjkllkjhgfdsaqbxbhacguyasdfghjklasdfghjkllkjhgfdsagaaasssdddfffggghhhhhhgggfffdddsssaaacdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuygaaabbbasdfghjkllkjhgfdsaqbxbhacguycdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuygaaabbbasdfghjkllkjhgfdsaqbxbhacguycdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuygaaabbbasdfghjkllkjhgfdsaqbxbhacguycdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuygaaabbbasdfghjkllkjhgfdsaqbxbhacguycdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuygaaabbbasdfghjkllkjhgfdsaqbxbhacguycdbhvw vsnjsvhivbkjfw nvhbjqebhqefnwbkjwfehgjwknwnvkbhvwhbkwfen,vwbjkvwhkjwfenwvkhwfeukfwnwhufw47hf4wkneqnuqefekfekuhfqehkfqewkfqwekhbfwqyewhkwefhufqiuyglhflkjdhlkfjahslkjfhlkjfahklsjfhalksjfhkjshflkasjhflkjhfdlkjhflkajsdhflkjashdlkfjahslkdfjhlkasdjfhlkasjdfhlkajsdfhlkasjdfhlksajfhlkajsfhlksdajfhlkjasdfhlkasdjfhlkjdfhlkaj,cv,xcnbv,mbd,mvbqkjgfeqiugdfwrkkdgjfbowelrkgdjfvrwek,jdfhlek.djhfvlwke.jsdfl.kjsdhbflvkjds,bvlk.j,hsdfl.jehdsfl.rwjhdsgl.kvrhdglkjehdsglvk.jgdsblkjgdhgflke.jsfdhlqw.elsafhlqewjfhlewkjsdgfblerkjdsbfvkreq,jsbdfkqk,jgadsflqkjwgdfslqkewjdsflkq.ejwgasfliuqekgjsdbflckqbsdxc,mfgwscgo2f3wydhlrtgwvdhsalfjçhxbshhvsdahflkjweqiorbevdhskfweliogeuwvudsahkfwqçgowebivdhbs ghbfdvihsbwekrlt4ogbufyfgrhnh jfdvshferhfuivbgjtreiwsuhgdrhuisdhfbgvlasejhrjiewushdbnrek5btjreidheeirhdisuhrhdisijxndkwlskajjksoajhsisowerhfdkowerfhcbnjfvchdbfjvocdhbfvhcidhfbvcdirhfbvcnjrbgvcjdjchbxsoxdjsdbnklckxjsbnsdkwrbjfdijnejiwjhdciijhbefbvjiofejfbb jfoepoejfvbdiowodijvbdwoodjvcdiowdjhvcidososkjcnsoosdjcvhidowidjhvidoidjvhhdioidjcvhcidoidjhviowidfvhdosdcvhgtr5neod0fghijgrew0sxijdb rtjfoc-xswo3ehrvtg bfdkspdokfjvnbnjcidosweirjtgbvhjcixsuwhgvazxycuviogltreskjhbxcfbjdodcvjndsoerifvcxushefiovcxsjeidocxoswkjedxsoejfvjckoderjtgnvckldeoirjtngfcmlekrnfcoeirjficodeijrhbfdnklerghvbc deoprtgvicudhwertogpbpvcdjwhhuritg0bvfori4jh5tug0friu5tgfioritjgfdoerijfdoekrjfdijerhfjdjhrfirhfihrfidrfjdjkgvkctgjobvjdfvpciuwlhsvçdalwelgdsdawqteigsd.twqugsdjbewjojvcsdjbweudsjkekwjisduvhewjthubfdhewtguifsdehgfudeuwidsewifgeir3ifrjrfihefygefyegyfgerugrhgjigothnbqsqwdcdefvfrgbgthnujmkilpçplkiujmjhyhbgrfvfefghnjijhgthjklpl,lçplmnjiuhbvgtygvcdrtfdrdswsaqwdxsefcderfgvfthbyumjio.lopç;.,mjhgvdwsxsqazsxcddfvtghmjk,ol.çpççpç.l.lik,ujmjyhnhyhnhyhntgbgrfvrffefvedcdexqazaq	\Awkdjkwdjwjdwojfioeifjiofihjdojedojefojefiowjdjcoowcojfko4jgiojiofvjioh59uhgy8ygrgyfc8duhehfvcdjjckjrjeopdfjht4jedfogjt4eodoijt4odcofijrewospkfreodojfoitgiofoeijwsoorwsgt4esofoeijwsoorwsgt4esokertgvlkmewisdigtrje";

struct lohi {
  int lo;
  int hi;
  struct lohi *next;
};

void putch(char c){
  while(!TXIF) continue;
  TXREG = c;
}

struct lohi lohi_create(int lo, int hi, struct lohi *tail) {
  struct lohi head;
  head.lo = lo;
  head.hi = hi;
  head.next = tail ? tail : NULL;
  return head;
}

void lohi_print(struct lohi *res, char buff[]) {

  while (res != 0) {
    printf("lo: [%d] hi: [%d] pal: [", res->lo, res->hi);
    int i = res->lo - 1;
    while (++i <= res->hi)
      printf("%c", buff[i]);
    printf("]\n");
    res = res->next;
  }
}

void chck_pal(int *lo, int *hi, char buff[], int len, struct lohi *head) {
  while (buff[*lo] == buff[*hi] && *lo > 0 && *hi < len) {
    (*lo)--;
    (*hi)++;
  }
  (*lo)++;
  (*hi)--;
  if (*hi - *lo > head->hi - head->lo) {
    head->lo = *lo;
    head->hi = *hi;
    lohi_print(head, buff);
  }
  return;
}

struct lohi find_pals(char buff[], int len) {

  struct lohi head = lohi_create(0, 1, NULL);
  int lo;
  int hi;
  int i = len;
  while (i-- > 1) {
    lo = i;
    hi = i;
    chck_pal(&lo, &hi, buff, len, &head);

    lo = i - 1;
    hi = i;
    if (buff[lo] == buff[hi])
      chck_pal(&lo, &hi, buff, len, &head);
  }
  return head;
}

int main(int argc, char **argv) {
  
  // not complete, wip
  TRISC = 0xFF;
  RCSTA = 0xB0;
  TXSTA = 0x24;
  SPBRG = 0x12;

  struct lohi r = find_pals(buff, 3013);
  struct lohi *res = &r;
  lohi_print(res, buff);

  return 0;
}
