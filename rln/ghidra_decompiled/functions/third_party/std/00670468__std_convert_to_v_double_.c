/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670468
 * Function: std::__convert_to_v<double>
 * Signature: void __convert_to_v<double>(char * param_1, double * param_2, _Ios_Iostate * param_3, int * * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, int* const&) */

void std::__convert_to_v<double>(char *param_1,double *param_2,_Ios_Iostate *param_3,int **param_4)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  double dVar2;
  double dVar3;
  char *local_8;
  
                    /* try { // try from 00670488 to 0077048f has its CatchHandler @ 00670498 */
                    /* try { // try from 00670490 to 0077049b has its CatchHandler @ 006701fc */
  __s = setlocale(6,(char *)0x0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00670488 with catch @ 00670498
                        */
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
                    /* try { // try from 0067049c to 00770533 has its CatchHandler @ 0067049c
                       catch(type#1 @ 00000000) { ... } // from try @ 0067049c with catch @ 0067049c
                       catch(type#1 @ 00000000) { ... } // from try @ 00670540 with catch @ 0067049c
                       catch(type#1 @ 00000000) { ... } // from try @ 00670700 with catch @ 0067049c
                        */
    sVar1 = strlen(__s);
    __locale = operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,"C");
  }
  dVar2 = strtod(param_1,&local_8);
  *param_2 = dVar2;
  if ((local_8 == param_1) || (*local_8 != '\0')) {
    *param_2 = 0.0;
    *(undefined4 *)param_3 = 4;
  }
  else {
                    /* try { // try from 00670534 to 0077053f has its CatchHandler @ 006706d4 */
                    /* try { // try from 00670540 to 007706f7 has its CatchHandler @ 0067049c */
    if ((DAT_00670580 < dVar2) || (dVar2 < DAT_00670588)) {
      dVar3 = DAT_00670580;
      if (dVar2 <= 0.0) {
        dVar3 = DAT_00670588;
      }
      *param_2 = dVar3;
      *(undefined4 *)param_3 = 4;
    }
  }
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  return;
}


