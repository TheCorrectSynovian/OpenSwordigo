/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c178
 * Function: FUN_0064c178
 * Signature: undefined FUN_0064c178(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064c178(long param_1,wchar_t *param_2,size_t param_3,wchar_t *param_4,tm *param_5)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    sVar1 = wcsftime(param_2,param_3,param_4,param_5);
                    /* try { // try from 0064c250 to 0074c2c3 has its CatchHandler @ 0064c524 */
    setlocale(6,(char *)0x0);
  }
  else {
    sVar1 = strlen(__s);
    __locale = operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,*(char **)(param_1 + 0x20));
                    /* try { // try from 0064c1f4 to 0074c207 has its CatchHandler @ 0064c520 */
    sVar1 = wcsftime(param_2,param_3,param_4,param_5);
    setlocale(6,__locale);
                    /* try { // try from 0064c208 to 0074c217 has its CatchHandler @ 0064c4c8 */
    operator_delete__(__locale);
  }
  if (sVar1 == 0) {
    *param_2 = L'\0';
  }
                    /* try { // try from 0064c218 to 0074c227 has its CatchHandler @ 0064c46c */
  return;
}


