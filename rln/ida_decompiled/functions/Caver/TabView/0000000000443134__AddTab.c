/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443134
 * Mangled: _ZN5Caver7TabView6AddTabERKSs
 * Demangled: Caver::TabView::AddTab(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7880  Caver::TabView::AddTab(std::string const&)
 *
 * Callees: 3
 *   0x00000000001F95B0  Caver::FastVector<std::string>::Resize(int)
 *   0x00000000001FD2F0  Caver::TabView::UpdateSprite(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x0000000000443144 string=0x0000000000443148 "h"
 *   insn=0x0000000000443148 string=0x000000000044314C "i"
 *   insn=0x0000000000443154 string=0x0000000000443158 "+"
 *   insn=0x0000000000443158 string=0x000000000044315C "(y"
 *   insn=0x0000000000443158 string=0x000000000044317C "i"
 *   insn=0x000000000044315C string=0x0000000000443160 "uB"
 *   insn=0x0000000000443164 string=0x0000000000443168 "I"
 *   insn=0x0000000000443174 string=0x00000000001F95B0 "0'"
 *   insn=0x0000000000443180 string=0x0000000000443184 " "
 *   insn=0x0000000000443184 string=0x0000000000443188 "H"
 *   insn=0x0000000000443188 string=0x000000000044318C "h"
 *   insn=0x0000000000443190 string=0x0000000000443194 ""
 *   insn=0x0000000000443194 string=0x0000000000443198 "h"
 *   insn=0x00000000004431A4 string=0x00000000004431A8 "R"
 *   insn=0x00000000004431A8 string=0x00000000001FD2F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabView::AddTab(__int64 a1)
{
  int v2; // w8
  int *v3; // x21

  v2 = *(_DWORD *)(a1 + 528);
  if ( v2 >= *(_DWORD *)(a1 + 532) )
  {
    v3 = (int *)(a1 + 528);
    Caver::FastVector<std::string>::Resize();
    v2 = *v3;
  }
  sub_56A6A8(*(_QWORD *)(a1 + 536) + 8LL * v2);
  ++*(_DWORD *)(a1 + 528);
  return Caver::TabView::UpdateSprite((Caver::TabView *)a1);
}

