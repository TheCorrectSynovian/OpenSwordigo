/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250B34
 * Mangled: _ZNK5Caver21UtilityShapeComponent5CloneEv
 * Demangled: Caver::UtilityShapeComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000250A78  Caver::UtilityShapeComponent::~UtilityShapeComponent()
 *
 * Callees: 7
 *   0x00000000001F3920  Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA8A0  Caver::ShapeComponent::ShapeComponent(void)
 *   0x00000000001FBC40  .memset
 *   0x0000000000250BB8  Caver::UtilityShapeComponent::ImplementsInterface(long)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000250B48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250B54 string=0x0000000000250B58 ":"
 *   insn=0x0000000000250B58 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000250B5C string=0x0000000000250B60 "P"
 *   insn=0x0000000000250B60 string=0x00000000001FA8A0 "0'"
 *   insn=0x0000000000250B64 string=0x0000000000250B68 ""
 *   insn=0x0000000000250B70 string=0x0000000000250B74 "\n!"
 *   insn=0x0000000000250B74 string=0x0000000000250B78 "\tA"
 *   insn=0x0000000000250B78 string=0x0000000000250B7C "@"
 *   insn=0x0000000000250B7C string=0x0000000000250B80 "!"
 *   insn=0x0000000000250B84 string=0x0000000000250B88 "i"
 *   insn=0x0000000000250B88 string=0x0000000000250B8C "`"
 *   insn=0x0000000000250B8C string=0x0000000000250B90 "d"
 *   insn=0x0000000000250B90 string=0x00000000001F3920 "P'"
 *   insn=0x0000000000250BAC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250BB0 string=0x0000000000250BB4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_OWORD *__fastcall Caver::UtilityShapeComponent::Clone(Caver::UtilityShapeComponent *this)
{
  _OWORD *v2; // x19
  __int128 v3; // q0

  v2 = (_OWORD *)operator new(0x88u);
  memset(v2, 0, 0x88u);
  Caver::ShapeComponent::ShapeComponent((Caver::ShapeComponent *)v2);
  *(_QWORD *)&v3 = &off_6BCB90;
  *((_QWORD *)&v3 + 1) = &off_6BCBD0;
  *(_QWORD *)v2 = off_6BCA58;
  v2[1] = v3;
  Caver::ShapeComponent::InitWithComponent((Caver::ShapeComponent *)v2, this);
  return v2;
}

