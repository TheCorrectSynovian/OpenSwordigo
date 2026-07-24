/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b456c
 * Function: Caver::CreateDirectoryAtPath
 * Signature: undefined __cdecl CreateDirectoryAtPath(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreateDirectoryAtPath(std::string const&, bool) */

undefined8 Caver::CreateDirectoryAtPath(string *param_1,bool param_2)

{
  int iVar1;
  char *__dest;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)param_1;
  if (param_2) {
    __dest = malloc(*(long *)(pcVar4 + -0x18) + 2);
    strcpy(__dest,pcVar4);
    lVar3 = *(long *)param_1;
    pcVar4 = __dest;
    if (*(char *)(lVar3 + *(long *)(lVar3 + -0x18) + -1) != '/') {
      __dest[*(long *)(lVar3 + -0x18)] = '/';
      __dest[*(long *)(lVar3 + -0x18) + 1] = '\0';
    }
                    /* try { // try from 005b45e8 to 006b4627 has its CatchHandler @ 005b45e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005b45e8 with catch @ 005b45e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005b4640 with catch @ 005b45e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005b467c with catch @ 005b45e8
                        */
    while (pcVar4 = strchr(pcVar4 + 1,0x2f), pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      iVar1 = mkdir(__dest,0x1f8);
      if ((iVar1 == -1) && (piVar2 = (int *)__errno(), *piVar2 != 0x11)) {
        free(__dest);
        return 0;
      }
      *pcVar4 = '/';
    }
    free(__dest);
  }
  else {
                    /* try { // try from 005b4628 to 006b463f has its CatchHandler @ 005b4670 */
    iVar1 = mkdir(pcVar4,0x1f8);
                    /* try { // try from 005b4640 to 006b4673 has its CatchHandler @ 005b45e8 */
    if ((iVar1 == -1) && (piVar2 = (int *)__errno(), *piVar2 != 0x11)) {
      return 0;
    }
  }
  return 1;
}


