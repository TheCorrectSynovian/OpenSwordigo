/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A973C
 * Mangled: _ZN5Caver17GUIAnimatedSprite19RemoveAllAnimationsEv
 * Demangled: Caver::GUIAnimatedSprite::RemoveAllAnimations(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004A975C string=0x00000000004A9760 " "
 *   insn=0x00000000004A9760 string=0x00000000004A97C4 "vZ"
 *   insn=0x00000000004A9768 string=0x00000000004A976C "5"
 *   insn=0x00000000004A9770 string=0x00000000004A9774 ""
 *   insn=0x00000000004A9784 string=0x00000000004A9788 "\t@"
 *   insn=0x00000000004A9790 string=0x00000000004A9794 ""
 *   insn=0x00000000004A97A4 string=0x00000000004A97A8 "@"
 *   insn=0x00000000004A97B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A97BC string=0x00000000004A97C0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAnimatedSprite::RemoveAllAnimations(Caver::GUIAnimatedSprite *this)
{
  char *v2; // x20
  char *v3; // x22
  _QWORD *v4; // x21
  char *v5; // x23
  __int64 v6; // x8
  __int64 v7; // x8

  v3 = (char *)this + 32;
  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 != (char *)this + 32 )
  {
    do
    {
      v4 = (_QWORD *)*((_QWORD *)v2 + 3);
      v5 = *(char **)v2;
      if ( v4 )
      {
        v6 = v4[1] - 1LL;
        v4[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v7 = v4[2] - 1LL;
          v4[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      operator delete(v2);
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  *((_QWORD *)this + 4) = v3;
  *((_QWORD *)this + 5) = v3;
}

