/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00441e04
 * Function: Caver::GameInterfaceBuilder::TextGradient
 * Signature: undefined __cdecl TextGradient(float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameInterfaceBuilder::TextGradient(float, float, float, float) */

void Caver::GameInterfaceBuilder::TextGradient
               (float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  FloatColor *in_x0;
  FloatColor *pFVar2;
  GradientColor *this;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  undefined8 *in_x8;
  Color aCStack_d0 [16];
  Color aCStack_c0 [16];
  Color aCStack_b0 [16];
  Color aCStack_a0 [16];
  Color aCStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 00441e48 with catch @ 00441e18 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00441e34 to 00541e47 has its CatchHandler @ 00441e6c */
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00441e48 to 00541e6f has its CatchHandler @ 00441e18 */
  uStack_78 = _UNK_0068e278;
  local_80 = _DAT_0068e270;
                    /* catch() { ... } // from try @ 00441e34 with catch @ 00441e6c */
  FloatColor::FromHSLA(in_x0,param_1 + DAT_00688648,param_2,param_3 + param_4 * -0.5,1.0);
  pFVar2 = (FloatColor *)Color::FromFloatColor(aCStack_a0,extraout_x1);
                    /* try { // try from 00441eb0 to 00541f07 has its CatchHandler @ 00441eb0
                       catch() { ... } // from try @ 00441eb0 with catch @ 00441eb0
                       catch() { ... } // from try @ 00441f2c with catch @ 00441eb0
                       catch() { ... } // from try @ 00441fc0 with catch @ 00441eb0 */
  FloatColor::FromHSLA(pFVar2,param_1,param_2,param_3 + param_4 * DAT_006846cc,1.0);
  pFVar2 = (FloatColor *)Color::FromFloatColor(aCStack_b0,extraout_x1_00);
  FloatColor::FromHSLA(pFVar2,param_1 + DAT_0068864c,param_2,param_3 + param_4 * DAT_00689df0,1.0);
  pFVar2 = (FloatColor *)Color::FromFloatColor(aCStack_c0,extraout_x1_01);
                    /* try { // try from 00441f08 to 00541f2b has its CatchHandler @ 004420b8 */
  FloatColor::FromHSLA(pFVar2,param_1,param_2,param_3,1.0);
  Color::FromFloatColor(aCStack_d0,extraout_x1_02);
                    /* try { // try from 00441f2c to 00541fa3 has its CatchHandler @ 00441eb0 */
  this = operator_new(0x18);
  GradientColor::GradientColor(this,4,(float *)&local_80,aCStack_90);
  *in_x8 = this;
  boost::detail::shared_count::shared_count<Caver::GradientColor>((shared_count *)(in_x8 + 1),this);
  boost::detail::sp_enable_shared_from_this();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


