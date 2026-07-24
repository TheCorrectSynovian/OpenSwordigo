/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fd7f0
 * Function: FUN_005fd7f0
 * Signature: undefined FUN_005fd7f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005fd7f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = tolower(param_2);
  switch(iVar1) {
  case 0x61:
    uVar2 = isalpha(param_1);
    break;
  default:
    return (uint)(param_2 == param_1);
  case 99:
    uVar2 = iscntrl(param_1);
    break;
  case 100:
    uVar2 = (uint)(param_1 - 0x30U < 10);
    break;
  case 0x6c:
    uVar2 = islower(param_1);
    break;
  case 0x70:
    uVar2 = ispunct(param_1);
    break;
  case 0x73:
    uVar2 = isspace(param_1);
    break;
  case 0x75:
    uVar2 = isupper(param_1);
    break;
  case 0x77:
    uVar2 = isalnum(param_1);
    break;
  case 0x78:
    uVar2 = isxdigit(param_1);
    break;
  case 0x7a:
    uVar2 = (uint)(param_1 == 0);
  }
  iVar1 = islower(param_2);
  uVar3 = (uint)(uVar2 == 0);
  if (iVar1 != 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}


