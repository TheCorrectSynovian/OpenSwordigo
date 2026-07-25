/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000270800
 * Mangled: _ZN5Caver15HealthComponent7PrepareEv
 * Demangled: Caver::HealthComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FC320  Caver::HealthComponent::RegisterLibrary(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 14
 *   insn=0x0000000000270810 string=0x00000000001FC320 "0'"
 *   insn=0x0000000000270814 string=0x0000000000270818 "`"
 *   insn=0x0000000000270818 string=0x000000000027081C "!"
 *   insn=0x000000000027081C string=0x0000000000270820 "p?"
 *   insn=0x0000000000270828 string=0x000000000027082C "\t\t@"
 *   insn=0x0000000000270828 string=0x0000000000270838 "`:@"
 *   insn=0x000000000027082C string=0x0000000000270830 ")"
 *   insn=0x0000000000270830 string=0x0000000000270834 "\t\t"
 *   insn=0x0000000000270838 string=0x000000000027083C "h:"
 *   insn=0x0000000000270840 string=0x0000000000270844 "@"
 *   insn=0x0000000000270844 string=0x0000000000270848 ""
 *   insn=0x0000000000270848 string=0x000000000027084C ""
 *   insn=0x0000000000270850 string=0x0000000000270860 ""
 *   insn=0x000000000027086C string=0x0000000000270870 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::HealthComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x8
  Caver::SceneObject *result; // x0
  int v5; // w8

  Caver::HealthComponent::RegisterLibrary((Caver::HealthComponent *)this);
  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::EntityInfoComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  result = this[14];
  this[14] = v3;
  if ( result )
  {
    v5 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v5;
    if ( !v5 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

