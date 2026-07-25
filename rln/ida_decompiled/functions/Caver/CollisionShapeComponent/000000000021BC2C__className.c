/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BC2C
 * Mangled: _ZNK5Caver23CollisionShapeComponent9classNameEv
 * Demangled: Caver::CollisionShapeComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000021BC38 string=0x000000000021BC3C "S"
 *   insn=0x000000000021BC3C string=0x000000000021BC40 "i"
 *   insn=0x000000000021BC44 string=0x000000000021BC48 "A"
 *   insn=0x000000000021BC48 string=0x0000000000583843 "CollisionShape"
 *   insn=0x000000000021BC58 string=0x000000000021BC5C "h"
 *   insn=0x000000000021BC7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CollisionShapeComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "CollisionShape");
}

