/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c5170
 * Function: Caver::FontText::SetColor
 * Signature: undefined __thiscall SetColor(FontText * this, Color * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FontText::SetColor(Caver::Color const&) */

void __thiscall Caver::FontText::SetColor(FontText *this,Color *param_1)

{
  long lVar1;
  float fVar2;
  GradientColor *this_00;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  GradientColor *local_68;
  long *local_60;
  Color local_58;
  Color local_57;
  Color local_56;
  Color local_55;
  Color local_54;
  Color local_53;
  Color local_52;
  Color local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  fVar2 = DAT_00697d84;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  local_58 = *param_1;
  local_57 = param_1[1];
  local_56 = param_1[2];
  iVar5 = (int)((float)(byte)local_58 * fVar2);
  local_55 = param_1[3];
  iVar3 = (int)((float)(byte)local_57 * fVar2);
  iVar6 = (int)((float)(byte)local_56 * fVar2);
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  local_50 = (undefined1)iVar5;
  if (0xfe < iVar6) {
    iVar6 = 0xff;
  }
  local_40 = _DAT_00697d90;
  local_48 = DAT_00697d88;
                    /* catch() { ... } // from try @ 005c5090 with catch @ 005c5228 */
  local_4f = (undefined1)iVar3;
  local_4e = (undefined1)iVar6;
  local_4d = 0xff;
  local_54 = local_58;
  local_53 = local_57;
  local_52 = local_56;
  local_51 = local_55;
  this_00 = operator_new(0x18);
  GradientColor::GradientColor(this_00,3,(float *)&local_48,&local_58);
  local_68 = this_00;
                    /* catch() { ... } // from try @ 005c503c with catch @ 005c5260 */
  boost::detail::shared_count::shared_count<Caver::GradientColor>((shared_count *)&local_60,this_00)
  ;
  boost::detail::sp_enable_shared_from_this(&local_68,this_00,this_00);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  plVar7 = *(long **)(this + 0x20);
  *(GradientColor **)(this + 0x18) = local_68;
  *(long **)(this + 0x20) = local_60;
  if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* catch() { ... } // from try @ 005c507c with catch @ 005c52bc */
    lVar4 = plVar7[2];
                    /* catch() { ... } // from try @ 005c5028 with catch @ 005c52c0 */
                    /* catch() { ... } // from try @ 005c50f8 with catch @ 005c52c4 */
    plVar7[2] = lVar4 + -1;
                    /* catch() { ... } // from try @ 005c50d4 with catch @ 005c52c8 */
    if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 005c510c with catch @ 005c52cc */
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if ((local_60 != (long *)0x0) && (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar4 = local_60[2];
    local_60[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
                    /* catch() { ... } // from try @ 005c4fe8 with catch @ 005c5328 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


