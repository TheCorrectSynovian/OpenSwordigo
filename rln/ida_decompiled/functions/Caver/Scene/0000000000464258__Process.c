/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000464258
 * Mangled: _ZN5Caver5Scene7ProcessEPNS_22SceneProcessingContextE
 * Demangled: Caver::Scene::Process(Caver::SceneProcessingContext *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9F40  Caver::SceneObject::Process(void)
 *   0x00000000001FDB80  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 6
 *   insn=0x0000000000464268 string=0x000000000046426C "Ef"
 *   insn=0x000000000046426C string=0x00000000001FDB80 "0'"
 *   insn=0x000000000046427C string=0x0000000000464280 "`"
 *   insn=0x0000000000464280 string=0x0000000000464284 "/W"
 *   insn=0x0000000000464284 string=0x00000000001F9F40 "0'"
 *   insn=0x0000000000464294 string=0x0000000000464298 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::Process(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x19
  __int64 v4; // x20

  result = Caver::ObjectLibrary::Process();
  v3 = *(_QWORD *)(a1 + 200);
  v4 = a1 + 184;
  if ( v4 != v3 )
  {
    do
    {
      Caver::SceneObject::Process(*(Caver::SceneObject **)(v3 + 40));
      result = sub_54C6A0(v3);
      v3 = result;
    }
    while ( v4 != result );
  }
  return result;
}

