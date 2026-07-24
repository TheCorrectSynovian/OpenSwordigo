/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670590
 * Function: std::__convert_to_v<long_double>
 * Signature: void __convert_to_v<long_double>(char * param_1, longdouble * param_2, _Ios_Iostate * param_3, int * * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&, int* const&)
    */

void std::__convert_to_v<long_double>
               (char *param_1,longdouble *param_2,_Ios_Iostate *param_3,int **param_4)

{
  longdouble lVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  char *__locale;
  double dVar4;
  longdouble lVar5;
  longdouble extraout_var;
  longdouble lVar6;
  char *local_8;
  
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar3 = strlen(__s);
    __locale = operator_new__(sVar3 + 1);
    memcpy(__locale,__s,sVar3 + 1);
    setlocale(6,"C");
  }
  dVar4 = strtold(param_1,&local_8);
  param_2[1] = extraout_var;
  *param_2 = (longdouble)dVar4;
  lVar1 = _LAB_00670700;
  lVar6 = _UNK_006706e8;
  lVar5 = _DAT_006706e0;
  if ((local_8 == param_1) || (*local_8 != '\0')) {
    param_2[1] = _LAB_00670708;
    *param_2 = lVar1;
    *(undefined4 *)param_3 = 4;
  }
  else {
    iVar2 = FUN_0067f9e8();
    if (iVar2 < 1) {
      iVar2 = FUN_0067fb24(dVar4,_DAT_006706f0);
      if (-1 < iVar2) goto LAB_00670628;
    }
    iVar2 = FUN_0067f9e8(dVar4,_LAB_00670700);
    if (iVar2 < 1) {
      lVar5 = _DAT_006706f0;
      lVar6 = _DAT_006706f8;
    }
    param_2[1] = lVar6;
    *param_2 = lVar5;
    *(undefined4 *)param_3 = 4;
  }
LAB_00670628:
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  return;
}


