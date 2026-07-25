/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230324
 * Mangled: _ZN5Caver15PortalComponent7PrepareEv
 * Demangled: Caver::PortalComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7930  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *
 * Referenced strings: 21
 *   insn=0x0000000000230334 string=0x0000000000230338 "hB@"
 *   insn=0x0000000000230334 string=0x00000000001F7930 "0'"
 *   insn=0x000000000023033C string=0x0000000000230340 "`"
 *   insn=0x0000000000230348 string=0x000000000023034C "hB@"
 *   insn=0x0000000000230348 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000230360 string=0x0000000000230364 "`"
 *   insn=0x0000000000230364 string=0x0000000000230368 "!"
 *   insn=0x000000000023036C string=0x0000000000230370 " "
 *   insn=0x0000000000230370 string=0x0000000000230374 ""
 *   insn=0x000000000023037C string=0x0000000000230380 " @"
 *   insn=0x0000000000230380 string=0x0000000000230384 "iz@"
 *   insn=0x0000000000230384 string=0x0000000000230388 "?"
 *   insn=0x0000000000230388 string=0x000000000023038C "@"
 *   insn=0x000000000023038C string=0x0000000000230390 "`B@"
 *   insn=0x0000000000230390 string=0x0000000000230394 "hz"
 *   insn=0x000000000023039C string=0x00000000002303A0 "@"
 *   insn=0x00000000002303A0 string=0x00000000002303A4 ""
 *   insn=0x00000000002303A4 string=0x00000000002303A8 ""
 *   insn=0x00000000002303A8 string=0x00000000002303AC "A"
 *   insn=0x00000000002303AC string=0x00000000002303B0 ""
 *   insn=0x00000000002303BC string=0x00000000002303C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::PortalComponent::Prepare(Caver::SceneObject **this)
{
  Caver::SceneObject *result; // x0
  int v3; // w8
  int v4; // w8

  result = (Caver::SceneObject *)Caver::PortalComponent::RegisterLibrary((Caver::PortalComponent *)this);
  if ( !this[16] )
  {
    result = (Caver::SceneObject *)Caver::ComponentOutletBase::Connect(
                                     (Caver::ComponentOutletBase *)(this + 14),
                                     (const Caver::Component *)this);
    if ( !this[16] )
    {
      result = (Caver::SceneObject *)Caver::SceneObject::ComponentWithInterface(
                                       this[5],
                                       (__int64)Caver::CollisionShapeComponent::Interface);
      if ( result )
      {
        if ( *((_DWORD *)result + 96) == 4 )
        {
          v3 = *((_DWORD *)result + 8);
          if ( *((_DWORD *)this + 30) != v3 )
          {
            result = this[16];
            *((_DWORD *)this + 30) = v3;
            this[16] = 0;
            if ( result )
            {
              v4 = *((_DWORD *)result + 2) - 1;
              *((_DWORD *)result + 2) = v4;
              if ( !v4 )
                return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
            }
          }
        }
      }
    }
  }
  return result;
}

