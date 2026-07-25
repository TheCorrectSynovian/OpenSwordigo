/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022A440
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent7PrepareEv
 * Demangled: Caver::ObjectLinkControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F90  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x00000000001F6F90  Caver::ObjectLinkControllerComponent::UpdateLocalTransform(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 15
 *   insn=0x000000000022A450 string=0x00000000001F4F90 "P'"
 *   insn=0x000000000022A458 string=0x00000000001F6F90 "0'"
 *   insn=0x000000000022A45C string=0x000000000022A460 "`"
 *   insn=0x000000000022A460 string=0x000000000022A464 "!"
 *   insn=0x000000000022A464 string=0x000000000022A468 "^X"
 *   insn=0x000000000022A470 string=0x000000000022A474 "\t\t@"
 *   insn=0x000000000022A470 string=0x000000000022A480 "`"
 *   insn=0x000000000022A474 string=0x000000000022A478 ")"
 *   insn=0x000000000022A478 string=0x000000000022A47C "\t\t"
 *   insn=0x000000000022A480 string=0x000000000022A484 "h"
 *   insn=0x000000000022A488 string=0x000000000022A48C "@"
 *   insn=0x000000000022A48C string=0x000000000022A490 ""
 *   insn=0x000000000022A490 string=0x000000000022A494 ""
 *   insn=0x000000000022A498 string=0x000000000022A4A8 ""
 *   insn=0x000000000022A4B4 string=0x000000000022A4B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::ObjectLinkControllerComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *result; // x0
  int v5; // w8

  Caver::ObjectLinkControllerComponent::RegisterLibrary((Caver::ObjectLinkControllerComponent *)this);
  Caver::ObjectLinkControllerComponent::UpdateLocalTransform((Caver::ObjectLinkControllerComponent *)this);
  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::TransformComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  result = this[36];
  this[36] = v3;
  if ( result )
  {
    v5 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v5;
    if ( !v5 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

