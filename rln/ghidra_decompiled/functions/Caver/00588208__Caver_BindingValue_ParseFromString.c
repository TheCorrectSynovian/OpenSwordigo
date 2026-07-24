/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588208
 * Function: Caver::BindingValue::ParseFromString
 * Signature: undefined __thiscall ParseFromString(BindingValue * this, string * param_1, BindingValueType param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ParseFromString(std::string const&, Caver::BindingValueType) */

void __thiscall
Caver::BindingValue::ParseFromString(undefined4 *param_1_00,BindingValue *this,string *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  BindingValue *this_00;
  bool extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  Program *extraout_x1;
  float fVar4;
  Program aPStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00587d3c with catch @ 0058822c */
  switch((int)param_1) {
  case 1:
    ValueWithString(this,param_1);
    break;
  case 2:
                    /* catch() { ... } // from try @ 00587750 with catch @ 005882d0
                       catch() { ... } // from try @ 00587794 with catch @ 005882d0 */
    uVar3 = boost::detail::lexical_cast<int,std::string,false,char>(this,aPStack_50,1);
    ValueWithInt((BindingValue *)(ulong)uVar3,extraout_w1_00);
    break;
  case 3:
    uVar3 = boost::detail::lexical_cast<unsigned_int,std::string,false,char>(this,aPStack_50,1);
    ValueWithUInt((BindingValue *)(ulong)uVar3,extraout_w1_01);
    break;
  case 4:
    iVar2 = FUN_006689e0(this,&DAT_0069692c);
    if (iVar2 == 0) {
      ValueWithBool((BindingValue *)0x1,extraout_w1);
    }
    else {
                    /* try { // try from 005882c0 to 00688417 has its CatchHandler @ 005875cc */
                    /* catch() { ... } // from try @ 0058773c with catch @ 005882c4 */
                    /* catch() { ... } // from try @ 0058768c with catch @ 005882c8 */
      ValueWithBool((BindingValue *)0x0,extraout_w1);
    }
    break;
  case 5:
    fVar4 = boost::detail::lexical_cast<float,std::string,false,char>(this,aPStack_50,1);
    ValueWithFloat(this_00,fVar4);
    break;
  case 6:
                    /* try { // try from 00588288 to 006882bf has its CatchHandler @ 00588444 */
    Program::Program(aPStack_50,(string *)this);
                    /* catch() { ... } // from try @ 005876b4 with catch @ 00588294 */
    ValueWithProgram((BindingValue *)aPStack_50,extraout_x1);
    Program::~Program(aPStack_50);
    break;
  default:
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 6) = 0;
    *(undefined8 *)(param_1_00 + 8) = 0;
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
  }
                    /* catch() { ... } // from try @ 00587764 with catch @ 00588264 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005876a0 with catch @ 00588334
                       catch() { ... } // from try @ 005876e4 with catch @ 00588334 */
  __stack_chk_fail();
}


