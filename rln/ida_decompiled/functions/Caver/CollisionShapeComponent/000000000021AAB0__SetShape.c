/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AAB0
 * Mangled: _ZN5Caver23CollisionShapeComponent8SetShapeERKNS_5ShapeE
 * Demangled: Caver::CollisionShapeComponent::SetShape(Caver::Shape const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *
 * Referenced strings: 37
 *   insn=0x000000000021AAC0 string=0x000000000021AAC4 "U"
 *   insn=0x000000000021AAD0 string=0x000000000021AAD4 "("
 *   insn=0x000000000021AAD4 string=0x000000000021AAD8 "hr"
 *   insn=0x000000000021AAD8 string=0x000000000021AADC ")"
 *   insn=0x000000000021AAE0 string=0x000000000021AAE4 "\n"
 *   insn=0x000000000021AAE0 string=0x000000000021AAF0 "tB@"
 *   insn=0x000000000021AAE4 string=0x000000000021AAE8 "J"
 *   insn=0x000000000021AAE8 string=0x000000000021AAEC "\n"
 *   insn=0x000000000021AAF0 string=0x000000000021AAF4 "i"
 *   insn=0x000000000021AAF4 string=0x000000000021AAF8 "4"
 *   insn=0x000000000021AAF8 string=0x000000000021AB3C "jr@"
 *   insn=0x000000000021AAFC string=0x000000000021AB00 ""
 *   insn=0x000000000021AB10 string=0x000000000021AB14 "\t@"
 *   insn=0x000000000021AB1C string=0x000000000021AB20 ""
 *   insn=0x000000000021AB30 string=0x000000000021AB34 "@"
 *   insn=0x000000000021AB3C string=0x000000000021AB40 "i"
 *   insn=0x000000000021AB40 string=0x000000000021AB44 "j\n"
 *   insn=0x000000000021AB48 string=0x000000000021AB4C "\n"
 *   insn=0x000000000021AB48 string=0x000000000021AB58 "t"
 *   insn=0x000000000021AB4C string=0x000000000021AB50 "J"
 *   insn=0x000000000021AB50 string=0x000000000021AB54 "\n"
 *   insn=0x000000000021AB58 string=0x000000000021AB5C "i""
 *   insn=0x000000000021AB60 string=0x000000000021AB94 "h"
 *   insn=0x000000000021AB64 string=0x000000000021AB68 ""
 *   insn=0x000000000021AB6C string=0x000000000021AB70 "!"
 *   insn=0x000000000021AB78 string=0x000000000021AB7C "\t@"
 *   insn=0x000000000021AB84 string=0x000000000021AB88 ""
 *   insn=0x000000000021AB94 string=0x000000000021AB98 "("
 *   insn=0x000000000021AB98 string=0x000000000021AB9C "`""
 *   insn=0x000000000021ABA0 string=0x000000000021ABA4 "q"
 *   insn=0x000000000021ABA4 string=0x00000000001F6FC0 "P'"
 *   insn=0x000000000021ABA8 string=0x000000000021ABAC "hb"
 *   insn=0x000000000021ABB8 string=0x00000000001F73A0 "0'"
 *   insn=0x000000000021ABE4 string=0x000000000021ABE8 "@"
 *   insn=0x000000000021ABEC string=0x000000000021ABF0 "h"
 *   insn=0x000000000021ABF0 string=0x000000000021ABF4 "H"
 *   insn=0x000000000021ABFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::SetShape(__int64 this, const Caver::Shape *a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  __int128 v13; // [xsp+8h] [xbp-38h] BYREF
  __int64 v14; // [xsp+18h] [xbp-28h]

  v2 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_DWORD *)(this + 112) = *(_DWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v3 = *((_QWORD *)a2 + 2);
  if ( v3 )
    ++*(_QWORD *)(v3 + 8);
  v5 = *(_QWORD **)(this + 128);
  *(_QWORD *)(this + 120) = v4;
  *(_QWORD *)(this + 128) = v3;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      this = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v9 = *(_QWORD *)(v2 + 120);
  v8 = *(_QWORD *)(v2 + 128);
  *(_DWORD *)(v2 + 264) = *(_DWORD *)(v2 + 112);
  if ( v8 )
    ++*(_QWORD *)(v8 + 8);
  v10 = *(_QWORD **)(v2 + 280);
  *(_QWORD *)(v2 + 272) = v9;
  *(_QWORD *)(v2 + 280) = v8;
  if ( !v10
    || (v11 = v10[1] - 1LL, (v10[1] = v11) != 0)
    || (this = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10), v12 = v10[2] - 1LL, (v10[2] = v12) != 0) )
  {
    if ( *(_BYTE *)(v2 + 377) )
      return this;
    goto LABEL_13;
  }
  this = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
  if ( !*(_BYTE *)(v2 + 377) )
  {
LABEL_13:
    Caver::Shape::Bounds((__int64 *)&v13, (Caver::Shape *)(v2 + 264));
    *(_OWORD *)(v2 + 344) = v13;
    return Caver::Component::UpdateObjectBounds((Caver::Component *)v2);
  }
  return this;
}

