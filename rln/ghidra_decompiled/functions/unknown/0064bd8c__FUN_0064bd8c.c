/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064bd8c
 * Function: FUN_0064bd8c
 * Signature: undefined FUN_0064bd8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064bd8c(long param_1,char *param_2,size_t param_3,char *param_4,tm *param_5)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  
                    /* catch() { ... } // from try @ 0064bba0 with catch @ 0064bdc0 */
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0064bbb0 with catch @ 0064bdcc */
    sVar1 = strlen(__s);
    __locale = operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
                    /* try { // try from 0064bdf0 to 0074be17 has its CatchHandler @ 0064be84 */
    setlocale(6,*(char **)(param_1 + 0x20));
  }
  sVar1 = strftime(param_2,param_3,param_4,param_5);
                    /* try { // try from 0064be18 to 0074bef3 has its CatchHandler @ 0064bab0 */
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  if (sVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}


