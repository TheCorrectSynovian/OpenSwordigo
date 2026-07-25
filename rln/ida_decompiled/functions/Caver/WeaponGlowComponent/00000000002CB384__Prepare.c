/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB384
 * Mangled: _ZN5Caver19WeaponGlowComponent7PrepareEv
 * Demangled: Caver::WeaponGlowComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FD490  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 26
 *   insn=0x00000000002CB394 string=0x00000000002CB398 "`"
 *   insn=0x00000000002CB398 string=0x00000000002CB39C "!"
 *   insn=0x00000000002CB3A8 string=0x00000000002CB3AC "\t\t@"
 *   insn=0x00000000002CB3A8 string=0x00000000002CB3B8 "`n@"
 *   insn=0x00000000002CB3AC string=0x00000000002CB3B0 ")"
 *   insn=0x00000000002CB3B0 string=0x00000000002CB3B4 "\t\t"
 *   insn=0x00000000002CB3B8 string=0x00000000002CB3BC "hn"
 *   insn=0x00000000002CB3C0 string=0x00000000002CB3C4 "@"
 *   insn=0x00000000002CB3C4 string=0x00000000002CB3C8 ""
 *   insn=0x00000000002CB3C8 string=0x00000000002CB3CC ""
 *   insn=0x00000000002CB3D0 string=0x00000000002CB3D4 ""
 *   insn=0x00000000002CB3D4 string=0x00000000002CB3D8 ""
 *   insn=0x00000000002CB3E0 string=0x00000000002CB3E4 "`"
 *   insn=0x00000000002CB3E4 string=0x00000000002CB3E8 "!0D"
 *   insn=0x00000000002CB3E8 string=0x00000000002CB3EC "}"
 *   insn=0x00000000002CB3F4 string=0x00000000002CB3F8 "\t\t@"
 *   insn=0x00000000002CB3F4 string=0x00000000002CB404 "`r@"
 *   insn=0x00000000002CB3F8 string=0x00000000002CB3FC ")"
 *   insn=0x00000000002CB3FC string=0x00000000002CB400 "\t\t"
 *   insn=0x00000000002CB404 string=0x00000000002CB408 "hr"
 *   insn=0x00000000002CB40C string=0x00000000002CB410 "@"
 *   insn=0x00000000002CB410 string=0x00000000002CB414 ""
 *   insn=0x00000000002CB414 string=0x00000000002CB418 ""
 *   insn=0x00000000002CB41C string=0x00000000002CB420 ""
 *   insn=0x00000000002CB420 string=0x00000000002CB424 ""
 *   insn=0x00000000002CB438 string=0x00000000001FD490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *v4; // x0
  int v5; // w8
  __int64 v6; // x0
  Caver::SceneObject *v7; // x8
  Caver::SceneObject *v8; // x0
  int v9; // w8

  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::TransformComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = this[27];
  this[27] = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ModelComponent::Interface);
  v7 = (Caver::SceneObject *)v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = this[28];
  this[28] = v7;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 2) - 1;
    *((_DWORD *)v8 + 2) = v9;
    if ( !v9 )
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  return Caver::WeaponGlowComponent::UpdateParticleEmitter((Caver::WeaponGlowComponent *)this);
}

