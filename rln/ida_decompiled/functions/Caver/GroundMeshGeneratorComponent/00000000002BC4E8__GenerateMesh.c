/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BC4E8
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent12GenerateMeshEv
 * Demangled: Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callers: 1
 *   0x00000000001FE110  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 20
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7420  Caver::GroundMeshGenerator::GenerateSurfaceMesh(int,Caver::Vector2 const*,float const*,float const*,Caver::TextureMapping const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8340  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9100  Caver::GroundMeshComponent::AddSurfaceMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000001FA3C0  Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *   0x00000000001FA520  Caver::GroundMeshComponent::AddFrontMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FD800  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x00000000001FE290  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000001FEF40  Caver::seed_fastrandom(int)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000203610  Caver::MeshBuilder::MeshBuilder(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002BCEE0  Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 173
 *   insn=0x00000000002BC50C string=0x00000000002BC510 "Z"
 *   insn=0x00000000002BC510 string=0x00000000002BC514 "H"
 *   insn=0x00000000002BC52C string=0x00000000002BC530 "l"
 *   insn=0x00000000002BC530 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002BC534 string=0x00000000002BC538 "(/"
 *   insn=0x00000000002BC538 string=0x00000000002BCB1C "H"
 *   insn=0x00000000002BC53C string=0x00000000002BC540 "\t"
 *   insn=0x00000000002BC544 string=0x00000000002BC548 "\t"
 *   insn=0x00000000002BC554 string=0x00000000002BC558 "?"
 *   insn=0x00000000002BC564 string=0x00000000002BC568 "B8!"
 *   insn=0x00000000002BC584 string=0x00000000002BC588 "V"
 *   insn=0x00000000002BC58C string=0x00000000002BC590 "h,"
 *   insn=0x00000000002BC598 string=0x00000000002BC59C ""
 *   insn=0x00000000002BC5B4 string=0x00000000002BC5B8 "`"
 *   insn=0x00000000002BC5D0 string=0x00000000002BC5E4 "w"
 *   insn=0x00000000002BC5D8 string=0x00000000002BC5DC "A"
 *   insn=0x00000000002BC5E4 string=0x00000000001FA3C0 "0'"
 *   insn=0x00000000002BC5E8 string=0x00000000002BC5EC "U\n"
 *   insn=0x00000000002BC5FC string=0x00000000002BC600 "8"
 *   insn=0x00000000002BC610 string=0x00000000002BC614 "\t}"
 *   insn=0x00000000002BC614 string=0x00000000002BC618 ""
 *   insn=0x00000000002BC624 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002BC62C string=0x00000000002BC630 "\t}"
 *   insn=0x00000000002BC630 string=0x00000000002BC634 ""
 *   insn=0x00000000002BC64C string=0x00000000002BC650 "K"
 *   insn=0x00000000002BC650 string=0x00000000002BC654 "\!"
 *   insn=0x00000000002BC65C string=0x00000000002BC660 ""
 *   insn=0x00000000002BC660 string=0x00000000002BC664 "\t"
 *   insn=0x00000000002BC66C string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002BC67C string=0x00000000002BC680 " "
 *   insn=0x00000000002BC684 string=0x00000000002BC688 "A\t("
 *   insn=0x00000000002BC688 string=0x00000000002BC68C "@ "
 *   insn=0x00000000002BC68C string=0x00000000002BC690 " ( "
 *   insn=0x00000000002BC690 string=0x00000000002BC694 "`z;"
 *   insn=0x00000000002BC6AC string=0x00000000002BC6B0 " "
 *   insn=0x00000000002BC6B4 string=0x00000000002BC6B8 "A\t)"
 *   insn=0x00000000002BC6B8 string=0x00000000002BC6BC "@ "
 *   insn=0x00000000002BC6BC string=0x00000000002BC6C0 " 8 "
 *   insn=0x00000000002BC6C8 string=0x00000000002BC6CC "{"
 *   insn=0x00000000002BC6DC string=0x00000000002BC6F4 ""
 *   insn=0x00000000002BC6EC string=0x00000000002BC6F0 "H"
 *   insn=0x00000000002BC728 string=0x00000000002BC72C "5"
 *   insn=0x00000000002BC72C string=0x00000000001FD800 "0'"
 *   insn=0x00000000002BC734 string=0x00000000002BC738 "z"
 *   insn=0x00000000002BC738 string=0x00000000001FA520 "0'"
 *   insn=0x00000000002BC73C string=0x00000000002BC740 "7"
 *   insn=0x00000000002BC740 string=0x00000000002BC784 ""
 *   insn=0x00000000002BC744 string=0x00000000002BC748 ""
 *   insn=0x00000000002BC754 string=0x00000000002BC758 "\t@"
 *   insn=0x00000000002BC764 string=0x00000000002BC768 ""
 *   insn=0x00000000002BC774 string=0x00000000002BC778 "@"
 *   insn=0x00000000002BC794 string=0x00000000002BC7AC ""
 *   insn=0x00000000002BC7A4 string=0x00000000002BC7A8 "H"
 *   insn=0x00000000002BC7E0 string=0x00000000002BC7E4 "h"
 *   insn=0x00000000002BC7E4 string=0x00000000002BC7E8 ""
 *   insn=0x00000000002BC7F8 string=0x00000000001F8340 "0'"
 *   insn=0x00000000002BC800 string=0x00000000002BC804 "?"
 *   insn=0x00000000002BC804 string=0x00000000001F9100 "0'"
 *   insn=0x00000000002BC808 string=0x00000000002BC80C "7"
 *   insn=0x00000000002BC810 string=0x00000000002BC814 ""
 *   insn=0x00000000002BC820 string=0x00000000002BC824 "\t@"
 *   insn=0x00000000002BC830 string=0x00000000002BC834 ""
 *   insn=0x00000000002BC840 string=0x00000000002BC844 "@"
 *   insn=0x00000000002BC854 string=0x00000000002BC86C ""
 *   insn=0x00000000002BC864 string=0x00000000002BC868 "H"
 *   insn=0x00000000002BC87C string=0x00000000002BC880 "d"
 *   insn=0x00000000002BC8A4 string=0x00000000002BC8A8 "z"
 *   insn=0x00000000002BC8B8 string=0x00000000002BC8BC "7"
 *   insn=0x00000000002BC8C0 string=0x00000000002BC8C4 ""
 *   insn=0x00000000002BC8D0 string=0x00000000002BC8D4 "\t@"
 *   insn=0x00000000002BC8E0 string=0x00000000002BC8E4 ""
 *   insn=0x00000000002BC8F0 string=0x00000000002BC8F4 "@"
 *   insn=0x00000000002BC900 string=0x00000000002BC904 "@"
 *   insn=0x00000000002BC904 string=0x00000000002BC908 "j"
 *   insn=0x00000000002BC908 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002BC90C string=0x00000000002BC910 "@"
 *   insn=0x00000000002BC910 string=0x00000000002BC914 "g"
 *   insn=0x00000000002BC918 string=0x00000000002BC91C "7"
 *   insn=0x00000000002BC920 string=0x00000000002BC924 ""
 *   insn=0x00000000002BC930 string=0x00000000002BC934 "\t@"
 *   insn=0x00000000002BC940 string=0x00000000002BC944 ""
 *   insn=0x00000000002BC950 string=0x00000000002BC954 "@"
 *   insn=0x00000000002BC960 string=0x00000000002BC964 "@"
 *   insn=0x00000000002BC964 string=0x00000000002BC968 "R"
 *   insn=0x00000000002BC96C string=0x00000000002BC970 "@"
 *   insn=0x00000000002BC970 string=0x00000000002BC974 "O"
 *   insn=0x00000000002BC980 string=0x00000000002BC984 ""
 *   insn=0x00000000002BC988 string=0x00000000002BC98C "!"
 *   insn=0x00000000002BC990 string=0x00000000002BC994 "\t@"
 *   insn=0x00000000002BC9A0 string=0x00000000002BC9A4 ""
 *   insn=0x00000000002BC9A8 string=0x00000000002BC9AC "!"
 *   insn=0x00000000002BC9B0 string=0x00000000002BC9B4 "@"
 *   insn=0x00000000002BC9BC string=0x00000000002BC9C0 ","
 *   insn=0x00000000002BC9C8 string=0x00000000002BC9DC "8s@"
 *   insn=0x00000000002BC9D0 string=0x00000000002BC9D4 "C"
 *   insn=0x00000000002BC9E0 string=0x00000000002BC9E4 "9?@"
 *   insn=0x00000000002BC9F0 string=0x00000000002BC9F4 ";"
 *   insn=0x00000000002BC9F8 string=0x00000000002BC9FC "h"
 *   insn=0x00000000002BCA18 string=0x00000000001F7420 "0'"
 *   insn=0x00000000002BCA28 string=0x00000000002BCA2C "7"
 *   insn=0x00000000002BCA30 string=0x00000000002BCA34 ""
 *   insn=0x00000000002BCA40 string=0x00000000002BCA44 "\t@"
 *   insn=0x00000000002BCA50 string=0x00000000002BCA54 ""
 *   insn=0x00000000002BCA60 string=0x00000000002BCA64 "@"
 *   insn=0x00000000002BCA9C string=0x00000000002BCAA0 "|"
 *   insn=0x00000000002BCAA0 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000002BCAAC string=0x00000000002BCAB0 "@"
 *   insn=0x00000000002BCAB8 string=0x00000000002BCABC "@"
 *   insn=0x00000000002BCAC4 string=0x00000000002BCAC8 "5"
 *   insn=0x00000000002BCACC string=0x00000000002BCAD0 ""
 *   insn=0x00000000002BCADC string=0x00000000002BCAE0 "\t@"
 *   insn=0x00000000002BCAEC string=0x00000000002BCAF0 ""
 *   insn=0x00000000002BCAFC string=0x00000000002BCB00 "@"
 *   insn=0x00000000002BCB10 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002BCB24 string=0x00000000002BCB28 "A"
 *   insn=0x00000000002BCB7C string=0x00000000002BCB80 "B8!"
 *   insn=0x00000000002BCB84 string=0x00000000002BCB88 "H"
 *   insn=0x00000000002BCBA0 string=0x00000000002BCBA4 "s"
 *   insn=0x00000000002BCBD0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BCBF0 string=0x00000000002BCBF4 "V"
 *   insn=0x00000000002BCBF4 string=0x00000000002BCBF8 "E"
 *   insn=0x00000000002BCC04 string=0x00000000002BCC08 "v"
 *   insn=0x00000000002BCC0C string=0x00000000002BCC10 ""
 *   insn=0x00000000002BCC1C string=0x00000000002BCC20 "\t@"
 *   insn=0x00000000002BCC2C string=0x00000000002BCC30 ""
 *   insn=0x00000000002BCC3C string=0x00000000002BCC40 "@"
 *   insn=0x00000000002BCC48 string=0x00000000002BCC4C "*"
 *   insn=0x00000000002BCC54 string=0x00000000002BCC58 "6\t"
 *   insn=0x00000000002BCC5C string=0x00000000002BCC60 ""
 *   insn=0x00000000002BCC6C string=0x00000000002BCC70 "\t@"
 *   insn=0x00000000002BCC7C string=0x00000000002BCC80 ""
 *   insn=0x00000000002BCC8C string=0x00000000002BCC90 "@"
 *   insn=0x00000000002BCC98 string=0x00000000002BCC9C "8"
 *   insn=0x00000000002BCCAC string=0x00000000002BCCB0 ""
 *   insn=0x00000000002BCCBC string=0x00000000002BCCC0 "\t@"
 *   insn=0x00000000002BCCCC string=0x00000000002BCCD0 ""
 *   insn=0x00000000002BCCDC string=0x00000000002BCCE0 "@"
 *   insn=0x00000000002BCCE8 string=0x00000000002BCCEC "W"
 *   insn=0x00000000002BCCF4 string=0x00000000002BCCF8 "@"
 *   insn=0x00000000002BCCFC string=0x00000000002BCD00 "`"
 *   insn=0x00000000002BCD0C string=0x00000000002BCD10 ""
 *   insn=0x00000000002BCD14 string=0x00000000002BCD18 "!"
 *   insn=0x00000000002BCD1C string=0x00000000002BCD20 "\t@"
 *   insn=0x00000000002BCD2C string=0x00000000002BCD30 ""
 *   insn=0x00000000002BCD34 string=0x00000000002BCD38 "!"
 *   insn=0x00000000002BCD3C string=0x00000000002BCD40 "@"
 *   insn=0x00000000002BCD54 string=0x00000000002BCD58 "`"
 *   insn=0x00000000002BCD58 string=0x00000000002BCD5C "U"
 *   insn=0x00000000002BCD60 string=0x00000000002BCD64 "@"
 *   insn=0x00000000002BCD64 string=0x00000000002BCD68 "R"
 *   insn=0x00000000002BCD6C string=0x00000000002BCD70 "6"
 *   insn=0x00000000002BCD70 string=0x00000000002BCD74 "5"
 *   insn=0x00000000002BCD94 string=0x00000000002BCD98 ""
 *   insn=0x00000000002BCD9C string=0x00000000002BCDA0 "A"
 *   insn=0x00000000002BCDA4 string=0x00000000002BCDA8 "\t@"
 *   insn=0x00000000002BCDB4 string=0x00000000002BCDB8 ""
 *   insn=0x00000000002BCDBC string=0x00000000002BCDC0 "A"
 *   insn=0x00000000002BCDC4 string=0x00000000002BCDC8 "@"
 *   insn=0x00000000002BCDF0 string=0x00000000002BCDF4 ""
 *   insn=0x00000000002BCDF8 string=0x00000000002BCDFC "a"
 *   insn=0x00000000002BCE00 string=0x00000000002BCE04 "\t@"
 *   insn=0x00000000002BCE10 string=0x00000000002BCE14 ""
 *   insn=0x00000000002BCE18 string=0x00000000002BCE1C "a"
 *   insn=0x00000000002BCE20 string=0x00000000002BCE24 "@"
 *   insn=0x00000000002BCE3C string=0x00000000002BCE40 "$"
 *   insn=0x00000000002BCE68 string=0x00000000002BCE6C "`"
 *   insn=0x00000000002BCE7C string=0x00000000002BCE80 ""
 *   insn=0x00000000002BCE8C string=0x00000000002BCE90 "\t@"
 *   insn=0x00000000002BCE9C string=0x00000000002BCEA0 ""
 *   insn=0x00000000002BCEAC string=0x00000000002BCEB0 "@"
 *   insn=0x00000000002BCEC8 string=0x00000000002BCECC "%"
 *   insn=0x00000000002BCED0 string=0x00000000002BCED4 "#"
 *   insn=0x00000000002BCED8 string=0x00000000002BCEDC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshGeneratorComponent::GenerateMesh(Caver::GroundMeshGeneratorComponent *this)
{
  __int64 v2; // x8
  _DWORD *v3; // x24
  float *v4; // x23
  float v5; // s0
  float v6; // s2
  float v7; // s1
  float v8; // s0
  int v9; // w19
  Caver::GroundMeshComponent *v10; // x0
  int v11; // w1
  __int64 v12; // x25
  unsigned __int64 v13; // x8
  Caver::Polygon *v14; // x22
  __int64 v15; // x9
  __int64 v16; // x8
  unsigned __int64 v17; // x0
  __int64 v18; // x0
  unsigned __int64 v19; // x8
  float *v20; // x19
  __int64 v21; // x9
  __int64 v22; // x8
  unsigned __int64 v23; // x0
  Caver *v24; // x0
  float *v25; // x20
  __int64 v26; // x27
  float v27; // s10
  Caver *v28; // x0
  float v29; // s10
  __int64 v30; // x8
  _QWORD *v31; // x23
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  float *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x23
  __int64 v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x23
  __int64 v43; // x8
  __int64 v44; // x8
  _QWORD *v45; // x23
  __int64 v46; // x8
  __int64 v47; // x8
  _QWORD *v48; // x23
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x23
  _QWORD *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x8
  float v55; // s2
  __int64 v56[2]; // [xsp+10h] [xbp-230h] BYREF
  __int64 v57; // [xsp+20h] [xbp-220h] BYREF
  _QWORD *v58; // [xsp+28h] [xbp-218h]
  __int64 v59; // [xsp+30h] [xbp-210h] BYREF
  float *v60; // [xsp+38h] [xbp-208h]
  float *v61; // [xsp+40h] [xbp-200h]
  __int64 v62; // [xsp+48h] [xbp-1F8h]
  __int64 v63; // [xsp+50h] [xbp-1F0h] BYREF
  _QWORD *v64; // [xsp+58h] [xbp-1E8h]
  void *v65; // [xsp+68h] [xbp-1D8h]
  void *p; // [xsp+88h] [xbp-1B8h]
  __int128 v67; // [xsp+B8h] [xbp-188h] BYREF
  float *v68; // [xsp+C8h] [xbp-178h]
  __int64 v69; // [xsp+D0h] [xbp-170h]
  __int64 v70; // [xsp+D8h] [xbp-168h] BYREF
  _QWORD *v71; // [xsp+E0h] [xbp-160h]
  void *v72; // [xsp+F0h] [xbp-150h]
  void *v73; // [xsp+110h] [xbp-130h]
  _QWORD v74[4]; // [xsp+140h] [xbp-100h] BYREF
  __int64 v75; // [xsp+160h] [xbp-E0h] BYREF
  _QWORD *v76; // [xsp+168h] [xbp-D8h]
  void *v77; // [xsp+178h] [xbp-C8h]
  void *v78; // [xsp+198h] [xbp-A8h]
  __int64 v79; // [xsp+1C8h] [xbp-78h]

  v79 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 112), this);
    v2 = *((_QWORD *)this + 16);
    if ( !v2 )
      return;
  }
  if ( !*((_QWORD *)this + 19) )
  {
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    if ( !*((_QWORD *)this + 19) )
      return;
    v3 = (_DWORD *)((char *)this + 208);
    v9 = *((_DWORD *)this + 52);
    v2 = *((_QWORD *)this + 16);
    if ( !v2 )
    {
      Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 112), this);
      v4 = (float *)((char *)this + 212);
      v5 = *((float *)this + 53);
      v2 = *((_QWORD *)this + 16);
      v55 = v5 * -0.5;
      if ( v9 == 1 )
      {
        v7 = *((float *)this + 57);
        *(float *)(v2 + 168) = v55 - v7;
        if ( !v2 )
        {
          Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 112), this);
          v2 = *((_QWORD *)this + 16);
          v5 = *((float *)this + 53);
          v7 = *((float *)this + 57);
        }
        goto LABEL_6;
      }
      *(float *)(v2 + 168) = v55;
      if ( !v2 )
      {
        Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 112), this);
        v2 = *((_QWORD *)this + 16);
        v5 = *((float *)this + 53);
      }
LABEL_11:
      v8 = v5 * 0.5;
      goto LABEL_12;
    }
    v4 = (float *)((char *)this + 212);
    v5 = *((float *)this + 53);
    v6 = v5 * -0.5;
    if ( v9 == 1 )
      goto LABEL_5;
LABEL_10:
    *(float *)(v2 + 168) = v6;
    goto LABEL_11;
  }
  v3 = (_DWORD *)((char *)this + 208);
  v4 = (float *)((char *)this + 212);
  v5 = *((float *)this + 53);
  v6 = v5 * -0.5;
  if ( *((_DWORD *)this + 52) != 1 )
    goto LABEL_10;
LABEL_5:
  v7 = *((float *)this + 57);
  *(float *)(v2 + 168) = v6 - v7;
LABEL_6:
  v8 = (float)(v5 * 0.5) + v7;
LABEL_12:
  *(float *)(v2 + 172) = v8;
  v10 = (Caver::GroundMeshComponent *)*((_QWORD *)this + 19);
  if ( !v10 )
  {
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    v10 = (Caver::GroundMeshComponent *)*((_QWORD *)this + 19);
  }
  Caver::GroundMeshComponent::RemoveAllMeshes(v10);
  Caver::seed_fastrandom((Caver *)*((unsigned int *)this + 54), v11);
  v12 = *((_QWORD *)this + 16);
  if ( !v12 )
  {
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 112), this);
    v12 = *((_QWORD *)this + 16);
  }
  v14 = (Caver::Polygon *)(v12 + 112);
  v13 = *(int *)(v12 + 112);
  v15 = (v13 * (unsigned __int128)4uLL) >> 64;
  v16 = 4 * v13;
  if ( v15 )
    v17 = -1;
  else
    v17 = v16;
  v18 = operator new[](v17);
  v19 = *(int *)v14;
  v20 = (float *)v18;
  v21 = (v19 * (unsigned __int128)4uLL) >> 64;
  v22 = 4 * v19;
  if ( v21 )
    v23 = -1;
  else
    v23 = v22;
  v24 = (Caver *)operator new[](v23);
  v25 = (float *)v24;
  if ( *(int *)v14 >= 1 )
  {
    v26 = 0;
    do
    {
      v27 = *v4;
      v28 = (Caver *)Caver::fastrandom(v24);
      v20[v26] = (float)(v27 * 0.5)
               + (float)(*((float *)this + 55) * (float)((float)((float)(int)v28 / (float)Caver::FASTRANDOM_MAX) + -0.5));
      v29 = *((float *)this + 53);
      v24 = (Caver *)Caver::fastrandom(v28);
      v25[v26++] = (float)(v29 * -0.5)
                 - (float)(*((float *)this + 55)
                         * (float)((float)((float)(int)v24 / (float)Caver::FASTRANDOM_MAX) + -0.5));
    }
    while ( v26 < *(int *)v14 );
  }
  v30 = *((_QWORD *)this + 22);
  if ( v30
    || (Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 160), this),
        (v30 = *((_QWORD *)this + 22)) != 0) )
  {
    v30 += 120;
  }
  v74[2] = v25;
  v74[3] = v30;
  v74[0] = v12 + 112;
  v74[1] = v20;
  Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)&v75);
  if ( !*((_QWORD *)this + 19) )
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
  Caver::GroundMeshGenerator::GenerateFrontMesh((Caver::GroundMeshGenerator *)v74);
  Caver::GroundMeshComponent::AddFrontMesh();
  v31 = (_QWORD *)*((_QWORD *)&v67 + 1);
  if ( *((_QWORD *)&v67 + 1) )
  {
    v32 = *(_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL) = v32;
    if ( !v32 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  if ( *v3 == 1 )
  {
    v34 = *((_QWORD *)this + 25);
    if ( v34
      || (Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 184), this),
          (v34 = *((_QWORD *)this + 25)) != 0) )
    {
      v34 += 120;
    }
    v68 = v25;
    v69 = v34;
    *(_QWORD *)&v67 = v12 + 112;
    *((_QWORD *)&v67 + 1) = v20;
    Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)&v70);
    if ( !*((_QWORD *)this + 19) )
      Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(
      &v59,
      (Caver::GroundMeshGenerator *)&v67,
      0.70711,
      *((float *)this + 56),
      *((float *)this + 57),
      *((float *)this + 58));
    Caver::GroundMeshComponent::AddSurfaceMesh();
    v35 = v60;
    if ( v60 )
    {
      v36 = *((_QWORD *)v60 + 1) - 1LL;
      *((_QWORD *)v60 + 1) = v36;
      if ( !v36 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v35 + 16LL))(v35);
        v37 = *((_QWORD *)v35 + 2) - 1LL;
        *((_QWORD *)v35 + 2) = v37;
        if ( !v37 )
          (*(void (__fastcall **)(float *))(*(_QWORD *)v35 + 24LL))(v35);
      }
    }
    v38 = *((_QWORD *)this + 22);
    if ( v38
      || (Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 160), this),
          (v38 = *((_QWORD *)this + 22)) != 0) )
    {
      v38 += 120;
    }
    v61 = v25;
    v62 = v38;
    v59 = v12 + 112;
    v60 = v20;
    Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)&v63);
    if ( !*((_QWORD *)this + 19) )
      Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(&v57, (Caver::GroundMeshGenerator *)&v59, 0.70711);
    Caver::GroundMeshComponent::AddSurfaceMesh();
    v39 = v58;
    if ( v58 )
    {
      v40 = v58[1] - 1LL;
      v58[1] = v40;
      if ( !v40 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
        v41 = v39[2] - 1LL;
        v39[2] = v41;
        if ( !v41 )
          (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
      }
    }
    if ( p )
      operator delete(p);
    if ( v65 )
      operator delete(v65);
    v42 = v64;
    if ( v64 )
    {
      v43 = v64[1] - 1LL;
      v64[1] = v43;
      if ( !v43 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
        v44 = v42[2] - 1LL;
        v42[2] = v44;
        if ( !v44 )
          (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
      }
    }
    if ( v73 )
      operator delete(v73);
    if ( v72 )
      operator delete(v72);
    v45 = v71;
    if ( v71 )
    {
      v46 = v71[1] - 1LL;
      v71[1] = v46;
      if ( !v46 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
        v47 = v45[2] - 1LL;
        v45[2] = v47;
        if ( !v47 )
          (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
      }
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 19) )
      Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    if ( !*((_QWORD *)this + 25) )
      Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 184), this);
    Caver::GroundMeshGenerator::GenerateSurfaceMesh();
    Caver::GroundMeshComponent::AddSurfaceMesh();
    v48 = (_QWORD *)*((_QWORD *)&v67 + 1);
    if ( *((_QWORD *)&v67 + 1) )
    {
      v49 = *(_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL) - 1LL;
      *(_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL) = v49;
      if ( !v49 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
        v50 = v48[2] - 1LL;
        v48[2] = v50;
        if ( !v50 )
          (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
      }
    }
  }
  v51 = *((_QWORD *)this + 19);
  if ( !v51 )
  {
    Caver::ComponentOutletBase::Connect((Caver::GroundMeshGeneratorComponent *)((char *)this + 136), this);
    v51 = *((_QWORD *)this + 19);
  }
  Caver::Polygon::Bounds(v56, v14);
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v67, (Caver::Rectangle *)v56, 10.0);
  *(_OWORD *)(v51 + 160) = v67;
  if ( v78 )
    operator delete(v78);
  if ( v77 )
    operator delete(v77);
  v52 = v76;
  if ( v76 )
  {
    v53 = v76[1] - 1LL;
    v76[1] = v53;
    if ( !v53 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
      v54 = v52[2] - 1LL;
      v52[2] = v54;
      if ( !v54 )
        (*(void (__fastcall **)(_QWORD *))(*v52 + 24LL))(v52);
    }
  }
  operator delete[](v25);
  operator delete[](v20);
}

