/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3378
 * Mangled: _ZNK5Caver20FireEmitterComponent9classNameEv
 * Demangled: Caver::FireEmitterComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002A3384 string=0x00000000002A3388 "S"
 *   insn=0x00000000002A3388 string=0x00000000002A338C "i"
 *   insn=0x00000000002A3394 string=0x00000000005856AF "FireEmitter"
 *   insn=0x00000000002A33A4 string=0x00000000002A33A8 "h"
 *   insn=0x00000000002A33C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FireEmitterComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "FireEmitter");
}

