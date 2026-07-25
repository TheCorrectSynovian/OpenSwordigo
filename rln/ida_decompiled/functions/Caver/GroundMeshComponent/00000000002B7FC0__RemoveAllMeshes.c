/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B7FC0
 * Mangled: _ZN5Caver19GroundMeshComponent15RemoveAllMeshesEv
 * Demangled: Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *
 * Callers: 2
 *   0x00000000001FA3C0  Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000002B7FD4 string=0x00000000002B7FD8 "uZG"
 *   insn=0x00000000002B7FE0 string=0x00000000002B803C "v"
 *   insn=0x00000000002B7FE8 string=0x00000000002B7FEC "4"
 *   insn=0x00000000002B7FF0 string=0x00000000002B7FF4 ""
 *   insn=0x00000000002B8004 string=0x00000000002B8008 "\t@"
 *   insn=0x00000000002B8010 string=0x00000000002B8014 ""
 *   insn=0x00000000002B8024 string=0x00000000002B8028 "@"
 *   insn=0x00000000002B803C string=0x00000000002B8040 "u>"
 *   insn=0x00000000002B8048 string=0x00000000002B80A4 "vJ"
 *   insn=0x00000000002B8050 string=0x00000000002B8054 "4"
 *   insn=0x00000000002B8058 string=0x00000000002B805C ""
 *   insn=0x00000000002B806C string=0x00000000002B8070 "\t@"
 *   insn=0x00000000002B8078 string=0x00000000002B807C ""
 *   insn=0x00000000002B808C string=0x00000000002B8090 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GroundMeshComponent::RemoveAllMeshes(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x21
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8

  v1 = this;
  v2 = this[14];
  v3 = this[15];
  if ( v3 != v2 )
  {
    v4 = this[14];
    do
    {
      v5 = *(_QWORD **)(v4 + 8);
      if ( v5 )
      {
        v6 = v5[1] - 1LL;
        v5[1] = v6;
        if ( !v6 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v7 = v5[2] - 1LL;
          v5[2] = v7;
          if ( !v7 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
      v4 += 16;
    }
    while ( v3 != v4 );
  }
  v8 = v1[17];
  v9 = v1[18];
  v1[15] = v2;
  if ( v9 != v8 )
  {
    v10 = v8;
    do
    {
      v11 = *(_QWORD **)(v10 + 8);
      if ( v11 )
      {
        v12 = v11[1] - 1LL;
        v11[1] = v12;
        if ( !v12 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      v10 += 16;
    }
    while ( v9 != v10 );
  }
  v1[18] = v8;
  return this;
}

