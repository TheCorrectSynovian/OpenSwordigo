/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C0B0
 * Mangled: _ZN5Caver23ObjectModifierComponent7PrepareEv
 * Demangled: Caver::ObjectModifierComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000028C0C0 string=0x000000000028C0C4 "`"
 *   insn=0x000000000028C0C4 string=0x000000000028C0C8 "!0D"
 *   insn=0x000000000028C0C8 string=0x000000000028C0CC "E"
 *   insn=0x000000000028C0D4 string=0x000000000028C0D8 "\t\t@"
 *   insn=0x000000000028C0D4 string=0x000000000028C0E4 "`B@"
 *   insn=0x000000000028C0D8 string=0x000000000028C0DC ")"
 *   insn=0x000000000028C0DC string=0x000000000028C0E0 "\t\t"
 *   insn=0x000000000028C0E4 string=0x000000000028C0E8 "hB"
 *   insn=0x000000000028C0EC string=0x000000000028C0F0 "@"
 *   insn=0x000000000028C0F0 string=0x000000000028C0F4 ""
 *   insn=0x000000000028C0F4 string=0x000000000028C0F8 ""
 *   insn=0x000000000028C0FC string=0x000000000028C10C ""
 *   insn=0x000000000028C118 string=0x000000000028C11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::ObjectModifierComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *result; // x0
  int v5; // w8

  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ModelComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  result = this[16];
  this[16] = v3;
  if ( result )
  {
    v5 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v5;
    if ( !v5 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

