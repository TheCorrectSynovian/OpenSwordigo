/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242228
 * Mangled: _ZN5Caver9Component18AutoConnectOutletsEv
 * Demangled: Caver::Component::AutoConnectOutlets(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 11
 *   insn=0x0000000000242238 string=0x000000000024223C "t.@"
 *   insn=0x000000000024223C string=0x0000000000242240 "v""
 *   insn=0x0000000000242264 string=0x0000000000242268 "H"
 *   insn=0x000000000024226C string=0x0000000000242270 ""
 *   insn=0x0000000000242270 string=0x0000000000242274 ""
 *   insn=0x0000000000242280 string=0x0000000000242284 "u"
 *   insn=0x0000000000242284 string=0x0000000000242288 ""
 *   insn=0x0000000000242288 string=0x000000000024228C ""
 *   insn=0x00000000002422A8 string=0x00000000002422AC "\t"
 *   insn=0x00000000002422B0 string=0x00000000002422B4 ")\t@"
 *   insn=0x00000000002422B4 string=0x00000000002422B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::AutoConnectOutlets(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x22
  Caver::SceneObject *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0

  v1 = this;
  v2 = *(_QWORD *)(this + 88);
  v3 = this + 72;
  if ( v2 != this + 72 )
  {
    do
    {
      if ( *(_BYTE *)(v2 + 64)
        && !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 56) + 8LL))(*(_QWORD *)(v2 + 56)) )
      {
        v4 = *(Caver::SceneObject **)(v1 + 40);
        v5 = (***(__int64 (__fastcall ****)(_QWORD))(v2 + 56))(*(_QWORD *)(v2 + 56));
        v6 = Caver::SceneObject::ComponentWithInterface(v4, v5);
        if ( v6 )
          (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD, _QWORD))(**(_QWORD **)(v2 + 56) + 16LL))(
            *(_QWORD **)(v2 + 56),
            *(_QWORD *)(v2 + 56),
            *(unsigned int *)(v6 + 32));
      }
      this = sub_54C640(v2);
      v2 = this;
    }
    while ( this != v3 );
  }
  return this;
}

