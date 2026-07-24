/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f904
 * Function: FUN_0061f904
 * Signature: undefined FUN_0061f904(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0061f904(undefined8 *param_1)

{
  int iVar1;
  __off_t _Var2;
  int local_8c;
  pollfd local_88;
  uint local_70;
  long local_50;
  
                    /* try { // try from 0061f914 to 0071f91b has its CatchHandler @ 0061fa34 */
  local_8c = 0;
                    /* try { // try from 0061f91c to 0071f92f has its CatchHandler @ 0061fa28 */
  iVar1 = fileno((FILE *)*param_1);
  iVar1 = ioctl(iVar1,0x541b,&local_8c);
                    /* try { // try from 0061f934 to 0071f94f has its CatchHandler @ 0061fa3c */
  if ((iVar1 == 0) && (-1 < local_8c)) {
    return (long)local_8c;
  }
  local_88.fd = FUN_0061f664(param_1);
                    /* try { // try from 0061f950 to 0071fb13 has its CatchHandler @ 0061f8c4 */
  local_88.events = 1;
  iVar1 = poll(&local_88,1,0);
  if (0 < iVar1) {
    iVar1 = FUN_0061f664(param_1);
    iVar1 = fstat(iVar1,(stat *)&stack0xffffffffffffff80);
    if ((iVar1 == 0) && ((local_70 & 0xf000) == 0x8000)) {
      iVar1 = FUN_0061f664(param_1);
      _Var2 = lseek(iVar1,0,1);
      return local_50 - _Var2;
    }
  }
  return 0;
}


