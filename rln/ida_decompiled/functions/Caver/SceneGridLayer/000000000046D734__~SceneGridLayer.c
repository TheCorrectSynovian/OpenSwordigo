/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D734
 * Mangled: _ZN5Caver14SceneGridLayerD2Ev
 * Demangled: Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Callers: 1
 *   0x0000000000200040  Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x0000000000200FE0  Caver::SceneGridLayer::Reset(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000046D830  Caver::SceneGridLayer::Reset(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000046D744 string=0x000000000046D748 "h"
 *   insn=0x000000000046D748 string=0x000000000046D74C "h"
 *   insn=0x000000000046D74C string=0x000000000046D758 "`"
 *   insn=0x000000000046D750 string=0x000000000046D754 "#N"
 *   insn=0x000000000046D75C string=0x000000000046D760 "`*@"
 *   insn=0x000000000046D75C string=0x00000000001F8990 "0'"
 *   insn=0x000000000046D760 string=0x000000000046D764 "@"
 *   insn=0x000000000046D764 string=0x000000000046D76C "t"
 *   insn=0x000000000046D768 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046D774 string=0x000000000046D778 "h"
 *   insn=0x000000000046D778 string=0x000000000046D77C ""
 *   insn=0x000000000046D788 string=0x000000000046D78C "@"
 *   insn=0x000000000046D790 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046D794 string=0x000000000046D798 "a"
 *   insn=0x000000000046D7CC string=0x000000000046D7D0 "p,"
 *   insn=0x000000000046D7E4 string=0x000000000046D7E8 "@"
 *   insn=0x000000000046D7FC string=0x000000000046D800 ""
 *   insn=0x000000000046D80C string=0x000000000046D810 "@"
 *   insn=0x000000000046D818 string=0x000000000046D81C "a"
 *   insn=0x000000000046D828 string=0x000000000046D82C "&P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridLayer::~SceneGridLayer(Caver::SceneGridLayer *this)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x21
  void *v6; // x0

  if ( *((_QWORD *)this + 6) )
    Caver::SceneGridLayer::Reset(this);
  Caver::FontText::~FontText((Caver::SceneGridLayer *)((char *)this + 104));
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    operator delete(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 - 8);
    if ( v4 )
    {
      v5 = 16 * v4;
      do
      {
        v6 = *(void **)(v3 + v5 - 16);
        if ( v6 )
          operator delete[](v6);
        v5 -= 16;
      }
      while ( v5 );
    }
    operator delete[]((void *)(v3 - 8));
  }
}

