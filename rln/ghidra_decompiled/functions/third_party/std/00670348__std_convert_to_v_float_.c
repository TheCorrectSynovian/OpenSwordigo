/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670348
 * Function: std::__convert_to_v<float>
 * Signature: void __convert_to_v<float>(char * param_1, float * param_2, _Ios_Iostate * param_3, int * * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, int* const&) */

void std::__convert_to_v<float>(char *param_1,float *param_2,_Ios_Iostate *param_3,int **param_4)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  float fVar2;
  float fVar3;
  char *local_8;
  
                    /* try { // try from 0067034c to 00770357 has its CatchHandler @ 00670464 */
                    /* try { // try from 00670358 to 00770487 has its CatchHandler @ 006701fc */
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar1 = strlen(__s);
    __locale = operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,"C");
  }
  fVar2 = strtof(param_1,&local_8);
  *param_2 = fVar2;
  if ((local_8 == param_1) || (*local_8 != '\0')) {
    *param_2 = 0.0;
    *(undefined4 *)param_3 = 4;
  }
  else if ((DAT_0067045c < fVar2) || (fVar2 < DAT_00670460)) {
    fVar3 = DAT_0067045c;
    if (fVar2 <= 0.0) {
      fVar3 = DAT_00670460;
    }
    *param_2 = fVar3;
    *(undefined4 *)param_3 = 4;
  }
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  return;
}


