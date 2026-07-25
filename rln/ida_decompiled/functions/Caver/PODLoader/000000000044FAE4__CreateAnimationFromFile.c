/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044FAE4
 * Mangled: _ZN5Caver9PODLoader23CreateAnimationFromFileERKSs
 * Demangled: Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE050  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 24
 *   0x00000000001F44C0  boost::detail::shared_count::shared_count<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>(Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4700  CPVRTModelPOD::CPVRTModelPOD(void)
 *   0x00000000001F4D80  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5400  Caver::FloatDataBuffer::~FloatDataBuffer()
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73E0  Caver::FloatDataBuffer::Resize(int)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FAA30  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FBC50  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002019C0  CPVRTModelPOD::~CPVRTModelPOD()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203D70  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 188
 *   insn=0x000000000044FB00 string=0x000000000044FB04 "X"
 *   insn=0x000000000044FB08 string=0x000000000044FB0C ""
 *   insn=0x000000000044FB20 string=0x00000000001F4700 "P'"
 *   insn=0x000000000044FB2C string=0x00000000001F4D80 "P'"
 *   insn=0x000000000044FB30 string=0x000000000044FB34 "S"
 *   insn=0x000000000044FB64 string=0x000000000044FB68 ""
 *   insn=0x000000000044FB74 string=0x000000000045010C "q"
 *   insn=0x000000000044FB9C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044FBB0 string=0x000000000044FBB4 " "
 *   insn=0x000000000044FBB4 string=0x000000000044FBB8 "n"
 *   insn=0x000000000044FBB8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000044FBD8 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000044FBDC string=0x000000000044FBE0 "H"
 *   insn=0x000000000044FC00 string=0x000000000044FC04 ")=G"
 *   insn=0x000000000044FC04 string=0x000000000044FC08 "!"
 *   insn=0x000000000044FC0C string=0x000000000044FC10 "\t"
 *   insn=0x000000000044FC0C string=0x000000000044FC24 "\t"
 *   insn=0x000000000044FC10 string=0x000000000044FC14 "*"
 *   insn=0x000000000044FC14 string=0x000000000044FC18 "\n"
 *   insn=0x000000000044FC20 string=0x000000000044FC30 "?"
 *   insn=0x000000000044FC24 string=0x000000000044FC28 "*"
 *   insn=0x000000000044FC28 string=0x000000000044FC2C "\n"
 *   insn=0x000000000044FC40 string=0x000000000044FC44 "a"
 *   insn=0x000000000044FC50 string=0x000000000044FC54 "H#"
 *   insn=0x000000000044FC70 string=0x00000000001FBC50 "0'"
 *   insn=0x000000000044FC88 string=0x000000000044FC8C "`"
 *   insn=0x000000000044FC90 string=0x000000000044FC94 "zz("
 *   insn=0x000000000044FC98 string=0x000000000044FC9C "Z"
 *   insn=0x000000000044FC9C string=0x000000000044FCA0 "_"
 *   insn=0x000000000044FCA0 string=0x000000000044FCA4 "C"
 *   insn=0x000000000044FCB4 string=0x000000000044FCB8 "J"
 *   insn=0x000000000044FCB8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044FCC0 string=0x000000000044FCC4 "9"
 *   insn=0x000000000044FCC4 string=0x000000000044FCC8 "8"
 *   insn=0x000000000044FCCC string=0x000000000044FCD0 ")c"
 *   insn=0x000000000044FCD8 string=0x000000000044FCDC "A"
 *   insn=0x000000000044FCE0 string=0x000000000044FCE4 ")]E"
 *   insn=0x000000000044FCF0 string=0x000000000044FCF4 "(A"
 *   insn=0x000000000044FD00 string=0x000000000044FD04 ""
 *   insn=0x000000000044FD04 string=0x000000000044FD08 "@!"
 *   insn=0x000000000044FD14 string=0x000000000044FD18 "F"
 *   insn=0x000000000044FD18 string=0x00000000001FAA30 "0'"
 *   insn=0x000000000044FD24 string=0x000000000044FD28 "\n"
 *   insn=0x000000000044FD30 string=0x000000000044FD34 " "
 *   insn=0x000000000044FD3C string=0x000000000044FD40 "(  "
 *   insn=0x000000000044FD40 string=0x000000000044FD44 "m"
 *   insn=0x000000000044FD54 string=0x000000000044FD58 "\t8"
 *   insn=0x000000000044FD60 string=0x000000000044FD64 "\t"
 *   insn=0x000000000044FD78 string=0x000000000044FD7C ")"
 *   insn=0x000000000044FD80 string=0x000000000044FD84 ""
 *   insn=0x000000000044FD88 string=0x000000000044FD8C " "
 *   insn=0x000000000044FD94 string=0x000000000044FD98 "(A"
 *   insn=0x000000000044FD9C string=0x000000000044FDA0 ""
 *   insn=0x000000000044FDA0 string=0x000000000044FDA4 "6"
 *   insn=0x000000000044FDA4 string=0x000000000044FDA8 "\n"
 *   insn=0x000000000044FDA8 string=0x000000000044FDAC "_\t"
 *   insn=0x000000000044FDB4 string=0x000000000044FDB8 "K"
 *   insn=0x000000000044FDB4 string=0x000000000044FDE8 ")"
 *   insn=0x000000000044FDB8 string=0x000000000044FDBC "("
 *   insn=0x000000000044FDD8 string=0x000000000044FDDC "a"
 *   insn=0x000000000044FDDC string=0x000000000044FDE0 "_"
 *   insn=0x000000000044FDF0 string=0x000000000044FDF4 "A"
 *   insn=0x000000000044FE0C string=0x00000000001F44C0 "P'"
 *   insn=0x000000000044FE28 string=0x000000000044FE2C "(q"
 *   insn=0x000000000044FE30 string=0x000000000044FE34 "k"
 *   insn=0x000000000044FE34 string=0x000000000044FE38 "Z"
 *   insn=0x000000000044FE34 string=0x00000000001F73E0 "0'"
 *   insn=0x000000000044FE38 string=0x000000000044FE3C "_"
 *   insn=0x000000000044FE3C string=0x000000000044FE40 "9C"
 *   insn=0x000000000044FE48 string=0x000000000044FE4C "?"
 *   insn=0x000000000044FE4C string=0x000000000044FE50 "m"
 *   insn=0x000000000044FE60 string=0x000000000044FE64 "!"
 *   insn=0x000000000044FE68 string=0x000000000044FE6C "oz"
 *   insn=0x000000000044FE84 string=0x000000000044FE88 "/"
 *   insn=0x000000000044FE8C string=0x000000000044FE90 "1"
 *   insn=0x000000000044FE94 string=0x000000000044FE98 "j"
 *   insn=0x000000000044FE98 string=0x000000000044FE9C "8"
 *   insn=0x000000000044FE98 string=0x000000000044FEC4 "B"
 *   insn=0x000000000044FE9C string=0x000000000044FF7C "J"
 *   insn=0x000000000044FEA0 string=0x000000000044FEA4 "Au"
 *   insn=0x000000000044FEB0 string=0x000000000044FEB4 "RI"
 *   insn=0x000000000044FEC4 string=0x000000000044FEC8 "B"
 *   insn=0x000000000044FECC string=0x000000000044FED0 "C"
 *   insn=0x000000000044FEDC string=0x000000000044FEF8 "@"
 *   insn=0x000000000044FEE0 string=0x000000000044FEE4 "@"
 *   insn=0x000000000044FEE4 string=0x000000000044FEE8 "B\n@"
 *   insn=0x000000000044FEEC string=0x000000000044FEF0 "!""
 *   insn=0x000000000044FEF0 string=0x000000000044FEF4 "\t"
 *   insn=0x000000000044FEFC string=0x000000000044FF00 "B\n@"
 *   insn=0x000000000044FF08 string=0x000000000044FF0C "A8#"
 *   insn=0x000000000044FF10 string=0x000000000044FF14 "!$"
 *   insn=0x000000000044FF2C string=0x000000000044FF30 "!"
 *   insn=0x000000000044FF38 string=0x000000000044FF3C "F2"
 *   insn=0x000000000044FF50 string=0x000000000044FF54 "?"
 *   insn=0x000000000044FF68 string=0x000000000044FF6C "?"
 *   insn=0x000000000044FF74 string=0x000000000044FF78 ""
 *   insn=0x000000000044FF7C string=0x000000000044FF80 "_"
 *   insn=0x000000000044FF80 string=0x000000000044FF84 "K"
 *   insn=0x000000000044FF90 string=0x000000000044FF94 ")"
 *   insn=0x000000000044FFA8 string=0x0000000000450004 "5"
 *   insn=0x000000000044FFAC string=0x000000000044FFBC "6"
 *   insn=0x000000000044FFB0 string=0x000000000044FFB4 ""
 *   insn=0x000000000044FFC0 string=0x000000000044FFC4 ""
 *   insn=0x000000000044FFD0 string=0x000000000044FFD4 "\t@"
 *   insn=0x000000000044FFE0 string=0x000000000044FFE4 ""
 *   insn=0x000000000044FFF0 string=0x000000000044FFF4 "@"
 *   insn=0x0000000000450008 string=0x000000000045000C ""
 *   insn=0x0000000000450018 string=0x000000000045001C "\t@"
 *   insn=0x0000000000450028 string=0x000000000045002C ""
 *   insn=0x0000000000450038 string=0x000000000045003C "@"
 *   insn=0x0000000000450050 string=0x0000000000450054 "\t"
 *   insn=0x0000000000450054 string=0x0000000000450058 ")"
 *   insn=0x0000000000450058 string=0x000000000045005C "\t"
 *   insn=0x0000000000450060 string=0x0000000000450064 "4"
 *   insn=0x0000000000450068 string=0x000000000045006C ""
 *   insn=0x0000000000450078 string=0x000000000045007C "\t@"
 *   insn=0x0000000000450088 string=0x000000000045008C ""
 *   insn=0x0000000000450098 string=0x000000000045009C "@"
 *   insn=0x00000000004500A8 string=0x00000000004500AC "4"
 *   insn=0x00000000004500B0 string=0x00000000004500B4 ""
 *   insn=0x00000000004500C0 string=0x00000000004500C4 "\t@"
 *   insn=0x00000000004500D0 string=0x00000000004500D4 ""
 *   insn=0x00000000004500E0 string=0x00000000004500E4 "@"
 *   insn=0x0000000000450100 string=0x0000000000450104 "u"
 *   insn=0x000000000045010C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000450110 string=0x0000000000450114 "u"
 *   insn=0x0000000000450118 string=0x000000000045011C ""
 *   insn=0x0000000000450128 string=0x000000000045012C "\t@"
 *   insn=0x0000000000450138 string=0x000000000045013C ""
 *   insn=0x0000000000450148 string=0x000000000045014C "@"
 *   insn=0x0000000000450154 string=0x0000000000450158 "*"
 *   insn=0x0000000000450160 string=0x0000000000450164 "5"
 *   insn=0x0000000000450164 string=0x0000000000450168 "8"
 *   insn=0x000000000045016C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000450178 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000450184 string=0x0000000000450188 " "
 *   insn=0x000000000045018C string=0x0000000000450190 ")=G"
 *   insn=0x0000000000450190 string=0x0000000000450194 "!"
 *   insn=0x0000000000450198 string=0x000000000045019C "\t"
 *   insn=0x0000000000450198 string=0x00000000004501B0 "\t"
 *   insn=0x000000000045019C string=0x00000000004501A0 "*"
 *   insn=0x00000000004501A0 string=0x00000000004501A4 "\n"
 *   insn=0x00000000004501AC string=0x00000000004501BC "?"
 *   insn=0x00000000004501B0 string=0x00000000004501B4 "*"
 *   insn=0x00000000004501B4 string=0x00000000004501B8 "\n"
 *   insn=0x00000000004501BC string=0x00000000004501C0 "l"
 *   insn=0x00000000004501C4 string=0x00000000004501C8 "wh"
 *   insn=0x00000000004501CC string=0x00000000004501D0 "8"
 *   insn=0x00000000004501D0 string=0x00000000004501D4 "J"
 *   insn=0x00000000004501D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004501E8 string=0x00000000004501EC "5"
 *   insn=0x00000000004501EC string=0x00000000004501F0 "C"
 *   insn=0x00000000004501F4 string=0x00000000004501F8 "C"
 *   insn=0x0000000000450200 string=0x0000000000450204 "5"
 *   insn=0x0000000000450208 string=0x000000000045020C ""
 *   insn=0x0000000000450218 string=0x000000000045021C "\t@"
 *   insn=0x0000000000450228 string=0x000000000045022C ""
 *   insn=0x0000000000450238 string=0x000000000045023C "@"
 *   insn=0x0000000000450250 string=0x0000000000450254 ""
 *   insn=0x0000000000450260 string=0x0000000000450264 "\t@"
 *   insn=0x0000000000450270 string=0x0000000000450274 ""
 *   insn=0x0000000000450280 string=0x0000000000450284 "@"
 *   insn=0x000000000045028C string=0x0000000000450290 ""
 *   insn=0x0000000000450298 string=0x000000000045029C "(a"
 *   insn=0x00000000004502A8 string=0x00000000004502AC "J=G"
 *   insn=0x00000000004502AC string=0x00000000004502B0 ")!"
 *   insn=0x00000000004502B0 string=0x00000000004502B4 "j"
 *   insn=0x00000000004502B4 string=0x00000000004502B8 "*"
 *   insn=0x00000000004502B4 string=0x00000000004502E0 "*"
 *   insn=0x00000000004502B8 string=0x00000000004502BC "K"
 *   insn=0x00000000004502BC string=0x00000000004502C0 "+"
 *   insn=0x00000000004502C4 string=0x00000000004502C8 "_"
 *   insn=0x00000000004502D4 string=0x00000000004502D8 "3h"
 *   insn=0x00000000004502D8 string=0x00000000004502DC ""
 *   insn=0x00000000004502E0 string=0x00000000004502E4 "K"
 *   insn=0x00000000004502E4 string=0x00000000004502E8 "+"
 *   insn=0x00000000004502E8 string=0x00000000004502EC "_"
 *   insn=0x00000000004502EC string=0x00000000004502F0 ""
 *   insn=0x000000000045030C string=0x0000000000450310 "m"
 *   insn=0x000000000045033C string=0x0000000000450340 ")]E"
 *   insn=0x000000000045034C string=0x0000000000450350 "(A"
 *   insn=0x0000000000450354 string=0x0000000000450358 ""
 *   insn=0x0000000000450384 string=0x0000000000450388 "h"
 *   insn=0x0000000000450390 string=0x00000000001F5400 "P'"
 *   insn=0x00000000004503AC string=0x00000000004503DC "m"
 *   insn=0x00000000004503B8 string=0x00000000004503BC "h"
 *   insn=0x00000000004503CC string=0x00000000004503D0 "a"
 *   insn=0x00000000004503E0 string=0x00000000004503E4 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::PODLoader::CreateAnimationFromFile(float32x2_t *a1@<X0>, unsigned __int64 *a2@<X8>)
{
  char *v4; // x19
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x0
  int *v7; // x0
  int *v8; // x19
  __int64 v9; // x26
  float32x2_t *v10; // x27
  unsigned int *v11; // x8
  int v12; // w9
  float32x2_t *v13; // x0
  float32x2_t *v14; // x23
  void *v15; // x0
  int v16; // w23
  unsigned __int64 v17; // x22
  __int64 v18; // x0
  unsigned __int64 v19; // x8
  float v20; // s0
  float v21; // s1
  unsigned __int64 v22; // x0
  _QWORD *v23; // x0
  _QWORD *v24; // x1
  unsigned __int64 v25; // x10
  _QWORD *v26; // x8
  _QWORD *v27; // x12
  __int64 v28; // x13
  __int64 v29; // x25
  __int64 i; // x26
  __int64 v31; // x9
  _QWORD *v32; // x8
  __int64 v33; // x11
  __int64 v34; // x10
  __int64 v35; // x15
  __int64 v36; // x15
  unsigned int v37; // w17
  float32x2_t *v38; // x18
  __int64 v39; // x0
  int v40; // w16
  int v41; // w15
  int v42; // w16
  int v43; // w17
  __int64 v44; // x1
  __int64 *v45; // x4
  __int64 v46; // x5
  float v47; // s1
  unsigned __int64 v48; // d0
  float v49; // s1
  float v50; // s4
  __int64 v51; // x6
  __int64 v52; // x5
  float v53; // s0
  _QWORD *v54; // x21
  unsigned __int64 v55; // x23
  _QWORD *v56; // x22
  __int64 v57; // x8
  __int64 v58; // x8
  __int64 v59; // x8
  __int64 v60; // x8
  _QWORD *v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  _QWORD *v64; // x20
  __int64 v65; // x8
  __int64 v66; // x8
  _QWORD *v67; // [xsp+38h] [xbp-108h]
  _QWORD *v68; // [xsp+40h] [xbp-100h]
  unsigned __int64 v69; // [xsp+48h] [xbp-F8h] BYREF
  _QWORD *v70; // [xsp+50h] [xbp-F0h]
  _BYTE v71[72]; // [xsp+60h] [xbp-E0h] BYREF
  unsigned int v72; // [xsp+A8h] [xbp-98h]
  __int64 v73; // [xsp+B0h] [xbp-90h]
  int v74; // [xsp+D8h] [xbp-68h]
  __int64 v75; // [xsp+E8h] [xbp-58h]

  v75 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  CPVRTModelPOD::CPVRTModelPOD((CPVRTModelPOD *)v71);
  v4 = (char *)Caver::NewByteBufferFromAndroidAsset();
  if ( !v4 || (unsigned int)CPVRTModelPOD::ReadFromMemory((CPVRTModelPOD *)v71, v4, (unsigned int)v69, 0, 0, 0, 0) )
  {
    *a2 = 0;
    a2[1] = 0;
    goto LABEL_4;
  }
  operator delete[](v4);
  v5 = a1[4].n64_i32[0];
  if ( is_mul_ok(v5, 4u) )
    v6 = 4 * v5;
  else
    v6 = -1;
  v7 = (int *)operator new[](v6);
  v8 = v7;
  if ( (int)v5 >= 1 )
    memset(v7, 255, 4LL * (unsigned int)v5);
  if ( v72 )
  {
    v9 = 0;
    v10 = a1 + 15;
    while ( 1 )
    {
      sub_566BB8((int)&v69, *(char **)(v73 + 96 * v9 + 8));
      std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find();
      v14 = v13;
      v15 = (void *)(v69 - 24);
      if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
      {
        v11 = (unsigned int *)(v69 - 8);
        if ( &pthread_create )
        {
          do
            v12 = __ldaxr(v11);
          while ( __stlxr(v12 - 1, v11) );
        }
        else
        {
          v12 = (*v11)--;
        }
        if ( v12 <= 0 )
          break;
      }
      if ( v10 != v14 )
        goto LABEL_21;
LABEL_22:
      if ( ++v9 >= (unsigned __int64)v72 )
        goto LABEL_23;
    }
    operator delete(v15);
    if ( v10 == v14 )
      goto LABEL_22;
LABEL_21:
    v8[v14[5].n64_i32[0]] = v9;
    goto LABEL_22;
  }
LABEL_23:
  if ( v74 )
    v16 = v74;
  else
    v16 = 1;
  v17 = operator new(0x28u);
  *(_QWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)v17 = &byte_6FD2F8;
  *(_QWORD *)(v17 + 8) = 0x41C0000000000000LL;
  v18 = operator new(0x28u);
  *(_QWORD *)(v18 + 24) = 0;
  *(_QWORD *)(v17 + 24) = v18;
  *(int64x2_t *)(v18 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v18 = &off_6D41B8;
  *(_DWORD *)(v17 + 32) = 0;
  v69 = v17;
  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v19 = v69;
  v20 = (float)(v16 - 1);
  v21 = *(float *)(v69 + 12);
  *(_DWORD *)(v69 + 8) = v16;
  if ( v21 > 0.0 )
    *(float *)(v19 + 32) = v20 / v21;
  *(_DWORD *)(v19 + 12) = 1103101952;
  *(float *)(v19 + 32) = v20 / 24.0;
  if ( !is_mul_ok(v16, 0x10u) || (unsigned __int64)(16LL * v16) >= 0xFFFFFFFFFFFFFFF8LL )
    v22 = -1;
  else
    v22 = 16LL * v16 + 8;
  v23 = (_QWORD *)operator new[](v22);
  *v23 = v16;
  v24 = v23 + 1;
  v25 = ((unsigned __int64)(16LL * v16 - 16) >> 4) + 1;
  v26 = v23 + 1;
  if ( v25 < 2 )
    goto LABEL_84;
  v26 = &v24[2 * (v25 & 0x1FFFFFFFFFFFFFFELL)];
  v27 = v23 + 4;
  v28 = v25 & 0x1FFFFFFFFFFFFFFELL;
  do
  {
    *((_DWORD *)v27 - 6) = 0;
    *((_DWORD *)v27 - 2) = 0;
    *(v27 - 2) = 0;
    *v27 = 0;
    v27 += 4;
    v28 -= 2;
  }
  while ( v28 );
  if ( v25 != (v25 & 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_84:
    do
    {
      *(_DWORD *)v26 = 0;
      v26[1] = 0;
      v26 += 2;
    }
    while ( v26 != &v24[2 * v16] );
  }
  v67 = v23 + 1;
  boost::detail::shared_count::shared_count<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>();
  if ( v16 >= 1 )
  {
    v29 = 0;
    for ( i = 0; i < v16; ++i )
    {
      Caver::FloatDataBuffer::Resize((Caver::FloatDataBuffer *)&v67[v29], 7 * a1[4].n64_u32[0]);
      v29 += 2;
    }
  }
  v31 = a1[4].n64_i32[0];
  if ( (int)v31 > 0 )
  {
    v32 = v67;
    v33 = v73;
    v34 = 0;
    while ( 1 )
    {
      v35 = v8[v34];
      if ( (v35 & 0x80000000) != 0 )
      {
        v41 = 0;
        v43 = 0;
        v42 = 0;
        v38 = (float32x2_t *)(a1[2].n64_u64[0] + 12 * v34);
        v39 = a1[3].n64_u64[0] + 16LL * (_DWORD)v34;
        if ( v16 >= 1 )
        {
LABEL_45:
          v44 = 0;
          v45 = v67 + 1;
          do
          {
            v46 = *v45;
            if ( v42 )
            {
              v47 = a1[21].n64_f32[1];
              v48 = vmul_n_f32((float32x2_t)v38->n64_u64[0], v47).n64_u64[0];
              v49 = v47 * v38[1].n64_f32[0];
            }
            else
            {
              v50 = a1[21].n64_f32[1];
              v48 = vmul_n_f32(vsub_f32((float32x2_t)v38->n64_u64[0], a1[20]), v50).n64_u64[0];
              v49 = (float)(v38[1].n64_f32[0] - a1[21].n64_f32[0]) * v50;
            }
            v51 = v46 + 28 * v34;
            *(_QWORD *)v51 = v48;
            *(float *)(v51 + 8) = v49;
            v52 = v46 + 4 * (7 * v34 + 3);
            ++v44;
            *(_DWORD *)v52 = *(_DWORD *)(v39 + 12);
            if ( v41 )
              v38 = (float32x2_t *)((char *)v38 + 12);
            *(float *)(v52 + 4) = -*(float *)v39;
            v45 += 2;
            *(float *)(v52 + 8) = -*(float *)(v39 + 4);
            v53 = *(float *)(v39 + 8);
            if ( v43 )
              v39 += 16;
            *(float *)(v52 + 12) = -v53;
          }
          while ( v44 < v16 );
        }
      }
      else
      {
        v36 = v33 + 96 * v35;
        v37 = *(_DWORD *)(v36 + 24);
        v38 = *(float32x2_t **)(v36 + 40);
        v39 = *(_QWORD *)(v36 + 56);
        v40 = *(_DWORD *)(v36 + 20) >> 31;
        v41 = v37 & 1;
        v42 = v40 ^ 1;
        v43 = (v37 >> 1) & 1;
        if ( v16 >= 1 )
          goto LABEL_45;
      }
      if ( ++v34 >= v31 )
      {
        v54 = v68;
        v55 = v69;
        if ( v68 )
          goto LABEL_56;
        goto LABEL_57;
      }
    }
  }
  v32 = v67;
  v54 = v68;
  v55 = v69;
  if ( v68 )
LABEL_56:
    ++v54[1];
LABEL_57:
  v56 = *(_QWORD **)(v55 + 24);
  *(_QWORD *)(v55 + 16) = v32;
  if ( v54 != v56 )
  {
    if ( v54 )
      ++v54[1];
    if ( v56 )
    {
      v57 = v56[1] - 1LL;
      v56[1] = v57;
      if ( !v57 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v56 + 16LL))(v56);
        v58 = v56[2] - 1LL;
        v56[2] = v58;
        if ( !v58 )
          (*(void (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
      }
    }
    *(_QWORD *)(v55 + 24) = v54;
  }
  if ( v54 )
  {
    v59 = v54[1] - 1LL;
    v54[1] = v59;
    if ( !v59 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
      v60 = v54[2] - 1LL;
      v54[2] = v60;
      if ( !v60 )
        (*(void (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
    }
  }
  v61 = v70;
  *a2 = v69;
  a2[1] = (unsigned __int64)v61;
  if ( v61 )
    ++v61[1];
  if ( v68 )
  {
    v62 = v68[1] - 1LL;
    v68[1] = v62;
    if ( !v62 )
    {
      (*(void (__fastcall **)())(*v68 + 16LL))();
      v63 = v68[2] - 1LL;
      v68[2] = v63;
      if ( !v63 )
        (*(void (__fastcall **)())(*v68 + 24LL))();
    }
  }
  v64 = v70;
  if ( v70 )
  {
    v65 = v70[1] - 1LL;
    v70[1] = v65;
    if ( !v65 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
      v66 = v64[2] - 1LL;
      v64[2] = v66;
      if ( !v66 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 24LL))(v64);
    }
  }
  operator delete[](v8);
LABEL_4:
  CPVRTModelPOD::~CPVRTModelPOD((CPVRTModelPOD *)v71);
}

