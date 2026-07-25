/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C8A20
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent11BoneForNameERKSs
 * Demangled: Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FAC20  Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC550  Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000002C8A44 string=0x00000000002C8A48 "&"
 *   insn=0x00000000002C8A48 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C8A4C string=0x00000000002C8A50 "T"
 *   insn=0x00000000002C8A54 string=0x00000000002C8A58 "("
 *   insn=0x00000000002C8A68 string=0x00000000002C8A6C "!@"
 *   insn=0x00000000002C8A84 string=0x00000000001FC550 "0'"
 *   insn=0x00000000002C8AA0 string=0x00000000002C8AA4 "!@"
 *   insn=0x00000000002C8AAC string=0x00000000002C8AB0 "H"
 *   insn=0x00000000002C8AB4 string=0x00000000002C8AB8 "4"
 *   insn=0x00000000002C8AC0 string=0x00000000002C8AC4 ""
 *   insn=0x00000000002C8ACC string=0x00000000002C8AD0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::BoneForName(Caver::Component *a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w0

  v2 = (_QWORD *)*((_QWORD *)a1 + 16);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1);
    v2 = (_QWORD *)*((_QWORD *)a1 + 16);
    if ( !v2 )
      return 0;
  }
  if ( v2[17] )
    goto LABEL_4;
  (*(void (__fastcall **)(_QWORD *))(*v2 + 64LL))(v2);
  if ( !v2[17] )
    return 0;
  v2 = (_QWORD *)*((_QWORD *)a1 + 16);
  if ( v2 )
  {
LABEL_4:
    v3 = v2[17];
    if ( v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1);
  v2 = (_QWORD *)*((_QWORD *)a1 + 16);
  v3 = v2[17];
  if ( !v3 )
  {
LABEL_5:
    (*(void (__fastcall **)(_QWORD *))(*v2 + 64LL))(v2);
    v3 = v2[17];
  }
LABEL_6:
  v4 = *(_QWORD *)(v3 + 24);
  v5 = Caver::Skeleton::BoneIndexForName();
  if ( (v5 & 0x80000000) == 0 )
    return *(_QWORD *)(v4 + 16) + 220LL * v5;
  return 0;
}

