/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004745E0
 * Mangled: _ZN5Caver11SceneObject27RegisterComponentInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager *)
 *
 * Callers: 1
 *   0x00000000001FF670  Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000474604 string=0x0000000000474608 ""
 *   insn=0x0000000000474608 string=0x000000000047460C "U@"
 *   insn=0x0000000000474614 string=0x0000000000474618 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::RegisterComponentInterfaces(__int64 this, Caver::ComponentManager *a2)
{
  __int64 *v2; // x20
  __int64 *i; // x21
  __int64 v5; // t1

  v2 = *(__int64 **)(this + 192);
  for ( i = *(__int64 **)(this + 200);
        i != v2;
        this = (*(__int64 (__fastcall **)(__int64, Caver::ComponentManager *))(*(_QWORD *)v5 + 168LL))(v5, a2) )
  {
    v5 = *v2++;
  }
  return this;
}

