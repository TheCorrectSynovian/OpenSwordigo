/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F364
 * Mangled: _ZNK5Caver20OverlayTextComponent9classNameEv
 * Demangled: Caver::OverlayTextComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000022F370 string=0x000000000022F374 "S"
 *   insn=0x000000000022F374 string=0x000000000022F378 "i"
 *   insn=0x000000000022F380 string=0x00000000005843FF "OverlayText"
 *   insn=0x000000000022F38C string=0x000000000022F390 "\n"
 *   insn=0x000000000022F390 string=0x000000000022F394 "h"
 *   insn=0x000000000022F3B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::OverlayTextComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "OverlayText");
}

