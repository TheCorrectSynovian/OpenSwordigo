/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046119C
 * Mangled: _ZN5Caver14ObjectTemplate12AddComponentERKN5boost13intrusive_ptrINS_9ComponentEEE
 * Demangled: Caver::ObjectTemplate::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x0000000000460DFC  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callees: 1
 *   0x00000000001F87F0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 13
 *   insn=0x000000000046119C string=0x00000000004611A0 "("
 *   insn=0x00000000004611A0 string=0x00000000004611A4 "\t!@"
 *   insn=0x00000000004611A4 string=0x00000000004611A8 "i"
 *   insn=0x00000000004611A8 string=0x00000000004611B4 "(L"
 *   insn=0x00000000004611B0 string=0x00000000001F87F0 "0'"
 *   insn=0x00000000004611C0 string=0x00000000004611C4 "l"
 *   insn=0x00000000004611C0 string=0x00000000004611FC "\t!"
 *   insn=0x00000000004611CC string=0x00000000004611D0 "j"
 *   insn=0x00000000004611D8 string=0x00000000004611E8 "m!"
 *   insn=0x00000000004611DC string=0x00000000004611E0 ")"
 *   insn=0x00000000004611E8 string=0x00000000004611EC "_"
 *   insn=0x00000000004611F4 string=0x00000000004611F8 "a"
 *   insn=0x0000000000461200 string=0x0000000000461204 "{]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectTemplate::AddComponent(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v4; // x10
  __int64 v5; // x11
  int v6; // w9
  int v7; // w12
  __int64 *v8; // x12
  bool v9; // zf
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  char v11; // [xsp+8h] [xbp-8h] BYREF

  v2 = *a2;
  if ( !*(_DWORD *)(*a2 + 32) )
  {
    v5 = *(_QWORD *)(a1 + 192);
    v4 = *(_QWORD *)(a1 + 200);
    v6 = 1;
    if ( v5 != v4 )
    {
      do
      {
        v7 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
        if ( v7 >= v6 )
        {
          if ( v7 > v6 )
            break;
          ++v6;
          v8 = &v10;
        }
        else
        {
          v8 = (__int64 *)&v11;
        }
        v9 = v4 == v5 + 8;
        *v8 = v5;
        v5 += 8;
      }
      while ( !v9 );
    }
    *(_DWORD *)(v2 + 32) = v6;
  }
  return Caver::SceneObject::AddComponent();
}

