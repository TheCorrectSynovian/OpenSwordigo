/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029274C
 * Mangled: _ZN5Caver15AttackComponent16SetDamageEnabledEb
 * Demangled: Caver::AttackComponent::SetDamageEnabled(bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *
 * Referenced strings: 9
 *   insn=0x0000000000292758 string=0x000000000029275C "`N@"
 *   insn=0x000000000029275C string=0x0000000000292760 "4"
 *   insn=0x0000000000292764 string=0x0000000000292768 "`""
 *   insn=0x0000000000292770 string=0x0000000000292774 "`N@"
 *   insn=0x0000000000292770 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000292774 string=0x0000000000292778 "`"
 *   insn=0x0000000000292778 string=0x0000000000292784 "t"
 *   insn=0x000000000029277C string=0x0000000000292780 "\"
 *   insn=0x0000000000292780 string=0x00000000001FD0F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::SetDamageEnabled(Caver::AttackComponent *this, char a2)
{
  Caver::CollisionShapeComponent *v3; // x0
  char v4; // w20

  v3 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19);
  v4 = a2 & 1;
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 136), this),
        (v3 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19)) != 0) )
  {
    Caver::CollisionShapeComponent::SetEnabled(v3);
  }
  *((_BYTE *)this + 292) = v4;
}

