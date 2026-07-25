/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CBCC
 * Mangled: _ZN5Caver29ProjectileControllerComponent7PrepareEv
 * Demangled: Caver::ProjectileControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *
 * Referenced strings: 16
 *   insn=0x000000000028CBDC string=0x000000000028CBE0 "`"
 *   insn=0x000000000028CBE0 string=0x000000000028CBE4 "!hF"
 *   insn=0x000000000028CBE4 string=0x000000000028CBE8 "~"
 *   insn=0x000000000028CBE4 string=0x000000000021C148 "@&"
 *   insn=0x000000000028CBF0 string=0x000000000028CBF4 "\t\t@"
 *   insn=0x000000000028CBF0 string=0x000000000028CC00 "`>@"
 *   insn=0x000000000028CBF4 string=0x000000000028CBF8 ")"
 *   insn=0x000000000028CBF8 string=0x000000000028CBFC "\t\t"
 *   insn=0x000000000028CC00 string=0x000000000028CC04 "h>"
 *   insn=0x000000000028CC08 string=0x000000000028CC0C "@"
 *   insn=0x000000000028CC08 string=0x000000000028CC28 "`"
 *   insn=0x000000000028CC0C string=0x000000000028CC10 ""
 *   insn=0x000000000028CC10 string=0x000000000028CC14 ""
 *   insn=0x000000000028CC18 string=0x000000000028CC1C ""
 *   insn=0x000000000028CC1C string=0x000000000028CC20 ""
 *   insn=0x000000000028CC34 string=0x000000000028CC38 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *v4; // x0
  int v5; // w8
  Caver::SceneObject *v6; // x0

  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::DamageComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = this[15];
  this[15] = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = this[5];
  *((_BYTE *)v6 + 243) = 0;
  return Caver::SceneObject::Activate(v6);
}

