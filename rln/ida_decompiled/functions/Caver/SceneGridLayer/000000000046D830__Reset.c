/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D830
 * Mangled: _ZN5Caver14SceneGridLayer5ResetEv
 * Demangled: Caver::SceneGridLayer::Reset(void)
 *
 * Callers: 2
 *   0x0000000000200FE0  Caver::SceneGridLayer::Reset(void)
 *   0x000000000046D734  Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 20
 *   insn=0x000000000046D840 string=0x000000000046D844 "u"
 *   insn=0x000000000046D844 string=0x000000000046D848 "u"
 *   insn=0x000000000046D848 string=0x000000000046D84C "h.@"
 *   insn=0x000000000046D850 string=0x000000000046D854 "K"
 *   insn=0x000000000046D854 string=0x000000000046D858 "i*@"
 *   insn=0x000000000046D85C string=0x000000000046D860 "?"
 *   insn=0x000000000046D860 string=0x000000000046D864 "k"
 *   insn=0x000000000046D864 string=0x000000000046D8D0 "J"
 *   insn=0x000000000046D868 string=0x000000000046D86C ",}\n"
 *   insn=0x000000000046D87C string=0x000000000046D880 "+"
 *   insn=0x000000000046D880 string=0x000000000046D8C4 "k"
 *   insn=0x000000000046D8B8 string=0x000000000046D8BC "?"
 *   insn=0x000000000046D8BC string=0x000000000046D8C0 "k"
 *   insn=0x000000000046D8C8 string=0x000000000046D8CC "+"
 *   insn=0x000000000046D8D0 string=0x000000000046D8D4 "_"
 *   insn=0x000000000046D8D4 string=0x000000000046D8D8 "K"
 *   insn=0x000000000046D8E4 string=0x000000000046D8E8 ""
 *   insn=0x000000000046D8F4 string=0x000000000046D8F8 "@"
 *   insn=0x000000000046D8FC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046D900 string=0x000000000046D904 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridLayer::Reset(Caver::SceneGridLayer *this)
{
  __int64 v2; // x21
  int v3; // w8
  int v4; // w9
  int i; // w10
  int v6; // w11
  int v7; // w12
  int v8; // w13
  __int64 *v9; // x14
  int v10; // w15
  __int64 v11; // x14
  int v12; // w15
  int j; // w16
  _QWORD *v14; // x17
  __int64 v15; // x8
  __int64 v16; // x22
  void *v17; // x0

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 11);
    if ( v3 >= 1 )
    {
      v4 = *((_DWORD *)this + 10);
      for ( i = 0; i < v3; ++i )
      {
        if ( v4 >= 1 )
        {
          v6 = 0;
          v7 = v4 * i;
          do
          {
            v8 = *(_DWORD *)(v2 + 16LL * (v7 + v6) + 8);
            if ( v8 >= 1 )
            {
              v9 = (__int64 *)(v2 + 16LL * (v7 + v6));
              v10 = *((_DWORD *)v9 + 3);
              v11 = *v9;
              v12 = v10 - v8;
              **(_QWORD **)(v11 + 8LL * v12) = 0;
              if ( v8 != 1 )
              {
                for ( j = 1; j < v8; ++j )
                {
                  v14 = *(_QWORD **)(v11 + 8LL * (v12 + j));
                  *v14 = 0;
                }
              }
            }
            ++v6;
          }
          while ( v6 < v4 );
        }
      }
    }
    *((_QWORD *)this + 6) = 0;
    v15 = *(_QWORD *)(v2 - 8);
    if ( v15 )
    {
      v16 = 16 * v15;
      do
      {
        v17 = *(void **)(v2 + v16 - 16);
        if ( v17 )
          operator delete[](v17);
        v16 -= 16;
      }
      while ( v16 );
    }
    operator delete[]((void *)(v2 - 8));
    *((_QWORD *)this + 5) = 0;
  }
}

