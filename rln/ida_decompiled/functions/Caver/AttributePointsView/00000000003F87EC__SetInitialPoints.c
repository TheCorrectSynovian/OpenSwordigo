/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F87EC
 * Mangled: _ZN5Caver19AttributePointsView16SetInitialPointsEi
 * Demangled: Caver::AttributePointsView::SetInitialPoints(int)
 *
 * Callers: 1
 *   0x00000000001FEFC0  Caver::AttributePointsView::SetInitialPoints(int)
 *
 * Callees: 2
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *   0x0000000000200F80  Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 33
 *   insn=0x00000000003F8800 string=0x00000000003F8804 "h"
 *   insn=0x00000000003F8804 string=0x00000000003F8808 "a"
 *   insn=0x00000000003F8808 string=0x00000000003F880C "a"
 *   insn=0x00000000003F8814 string=0x00000000003F8824 "`"
 *   insn=0x00000000003F8818 string=0x00000000003F881C "a"
 *   insn=0x00000000003F881C string=0x00000000003F8820 "h"
 *   insn=0x00000000003F8824 string=0x00000000003F8828 "h"
 *   insn=0x00000000003F8828 string=0x00000000003F882C "\t"
 *   insn=0x00000000003F8834 string=0x00000000003F8838 "?"
 *   insn=0x00000000003F883C string=0x00000000003F8840 "_"
 *   insn=0x00000000003F8844 string=0x00000000003F885C "h"
 *   insn=0x00000000003F884C string=0x00000000003F8850 ""
 *   insn=0x00000000003F8850 string=0x00000000003F8854 "@"
 *   insn=0x00000000003F8854 string=0x00000000003F8858 "j"
 *   insn=0x00000000003F8858 string=0x00000000001F8600 "0'"
 *   insn=0x00000000003F885C string=0x00000000003F8860 "\t"
 *   insn=0x00000000003F8860 string=0x00000000003F8864 "i"
 *   insn=0x00000000003F8864 string=0x00000000003F8870 "h"
 *   insn=0x00000000003F8868 string=0x00000000003F886C "\t"
 *   insn=0x00000000003F8870 string=0x00000000003F8874 "i"
 *   insn=0x00000000003F8878 string=0x00000000003F887C "t"
 *   insn=0x00000000003F8880 string=0x00000000003F8884 "u"
 *   insn=0x00000000003F8888 string=0x00000000003F888C "v""
 *   insn=0x00000000003F888C string=0x00000000003F8890 "("
 *   insn=0x00000000003F8890 string=0x00000000003F8894 "h"
 *   insn=0x00000000003F889C string=0x00000000003F88A0 "j"
 *   insn=0x00000000003F88C0 string=0x00000000003F88C4 "H"
 *   insn=0x00000000003F88C4 string=0x00000000003F88C8 "`"
 *   insn=0x00000000003F88C4 string=0x0000000000583734 "o"
 *   insn=0x00000000003F88D0 string=0x00000000003F88D4 "h"
 *   insn=0x00000000003F88D8 string=0x00000000003F88DC "-"
 *   insn=0x00000000003F88DC string=0x00000000003F88E0 "h"
 *   insn=0x00000000003F88F8 string=0x00000000003F88FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttributePointsView::SetInitialPoints(Caver::AttributePointsView *this, int a2)
{
  int v3; // w8
  Caver::GUIView *v4; // x0
  int v5; // w8
  __int64 v6; // x8
  __int64 v7; // x23
  char *v8; // x22
  __int64 result; // x0
  float v10; // s0

  v3 = *((_DWORD *)this + 96);
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 65) = a2;
  if ( v3 != a2 )
  {
    *((_DWORD *)this + 96) = a2;
    *((_BYTE *)this + 1344) = 1;
  }
  v4 = (Caver::GUIView *)*((_QWORD *)this + 37);
  v5 = *((_DWORD *)this + 64);
  if ( (v5 == a2) != (*((_BYTE *)v4 + 228) != 0) )
  {
    *((_BYTE *)v4 + 228) = v5 == a2;
    if ( v5 != a2 )
      Caver::GUIView::AddPopupAnimation(v4);
  }
  v6 = *((_QWORD *)this + 39);
  if ( !*(_BYTE *)(v6 + 228) )
    *(_BYTE *)(v6 + 228) = 1;
  v7 = 0;
  v8 = (char *)this + 392;
  *(_BYTE *)(*((_QWORD *)this + 41) + 228LL) = *((_DWORD *)this + 63) < 8;
  do
  {
    result = Caver::GUIAnimatedSprite::SetTexture();
    ++v7;
    v8 += 72;
  }
  while ( v7 != 12 );
  v10 = *((float *)this + 35);
  *((_BYTE *)this + 1344) = 1;
  if ( v10 > 0.001 )
    return (*(__int64 (__fastcall **)(Caver::AttributePointsView *))(*(_QWORD *)this + 88LL))(this);
  return result;
}

