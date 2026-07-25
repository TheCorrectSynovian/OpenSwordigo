/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEC10
 * Mangled: _ZNK5Caver21PortalEffectComponent9classNameEv
 * Demangled: Caver::PortalEffectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002AEC1C string=0x00000000002AEC20 "S"
 *   insn=0x00000000002AEC20 string=0x00000000002AEC24 "i"
 *   insn=0x00000000002AEC2C string=0x00000000005856E5 "PortalEffect"
 *   insn=0x00000000002AEC3C string=0x00000000002AEC40 "h"
 *   insn=0x00000000002AEC60 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AEC74 string=0x00000000002AEC78 "hZ@"
 *   insn=0x00000000002AEC7C string=0x00000000002AEC80 "`"
 *   insn=0x00000000002AEC7C string=0x00000000002AEC94 "=@"
 *   insn=0x00000000002AEC88 string=0x00000000002AEC8C "hZ@"
 *   insn=0x00000000002AEC88 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PortalEffectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "PortalEffect");
}

