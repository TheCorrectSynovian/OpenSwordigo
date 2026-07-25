/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047016C
 * Mangled: _ZN5Caver11SceneObject19RemoveAllComponentsEv
 * Demangled: Caver::SceneObject::RemoveAllComponents(void)
 *
 * Callers: 1
 *   0x00000000001FBEA0  Caver::SceneObject::RemoveAllComponents(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000047017C string=0x0000000000470180 "t"L"
 *   insn=0x000000000047018C string=0x00000000004701E8 "tf"
 *   insn=0x00000000004701A0 string=0x00000000004701A4 "hf@"
 *   insn=0x00000000004701A4 string=0x00000000004701A8 "?"
 *   insn=0x00000000004701A8 string=0x00000000004701AC "A"
 *   insn=0x00000000004701BC string=0x00000000004701C0 "@"
 *   insn=0x00000000004701C0 string=0x00000000004701C4 ""
 *   insn=0x00000000004701C4 string=0x00000000004701C8 ""
 *   insn=0x00000000004701CC string=0x00000000004701D0 ""
 *   insn=0x00000000004701D0 string=0x00000000004701D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::RemoveAllComponents(__int64 this)
{
  __int64 v1; // x19
  __int64 *v2; // x8
  __int64 *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  __int64 *v6; // x22
  int v7; // w8

  v1 = this;
  v3 = *(__int64 **)(this + 192);
  v2 = *(__int64 **)(this + 200);
  *(_DWORD *)(this + 216) = 0;
  if ( v3 != v2 )
  {
    v4 = 0;
    do
    {
      v5 = v3[v4++];
      *(_QWORD *)(v5 + 40) = 0;
    }
    while ( &v3[v4] != *(__int64 **)(this + 200) );
    if ( v4 * 8 )
    {
      v6 = v3;
      do
      {
        this = *v6;
        if ( *v6 )
        {
          v7 = *(_DWORD *)(this + 8) - 1;
          *(_DWORD *)(this + 8) = v7;
          if ( !v7 )
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
        }
        --v4;
        ++v6;
      }
      while ( v4 * 8 );
    }
  }
  *(_QWORD *)(v1 + 200) = v3;
  return this;
}

