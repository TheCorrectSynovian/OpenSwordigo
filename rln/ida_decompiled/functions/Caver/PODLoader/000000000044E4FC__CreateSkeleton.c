/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044E4FC
 * Mangled: _ZN5Caver9PODLoader14CreateSkeletonEv
 * Demangled: Caver::PODLoader::CreateSkeleton(void)
 *
 * Callers: 1
 *   0x00000000001FA020  Caver::PODLoader::CreateSkeleton(void)
 *
 * Callees: 26
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9650  Caver::Matrix4::Inverse(void)
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FB710  Caver::Skeleton::Skeleton(int)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *   0x00000000001FC810  .strstr
 *   0x00000000001FFC60  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002010D0  .strncmp
 *   0x0000000000201640  boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203230  .strlen
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 213
 *   insn=0x000000000044E518 string=0x000000000044E51C "["
 *   insn=0x000000000044E51C string=0x000000000044E520 "i"
 *   insn=0x000000000044E538 string=0x00000000001F8570 "0'"
 *   insn=0x000000000044E548 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000044E564 string=0x000000000044E568 "%*"
 *   insn=0x000000000044E564 string=0x000000000058A1D7 "Bone"
 *   insn=0x000000000044E574 string=0x000000000044E578 " C_"
 *   insn=0x000000000044E584 string=0x000000000044E588 "`"
 *   insn=0x000000000044E588 string=0x000000000044E58C "hjx8"
 *   insn=0x000000000044E588 string=0x000000000044E594 "("
 *   insn=0x000000000044E594 string=0x000000000044E598 "H"
 *   insn=0x000000000044E598 string=0x000000000044E59C "zj(8"
 *   insn=0x000000000044E5A0 string=0x000000000044E5A4 "9"
 *   insn=0x000000000044E5B0 string=0x000000000044E5B4 ""
 *   insn=0x000000000044E5B4 string=0x000000000044E5B8 "\t"
 *   insn=0x000000000044E5BC string=0x000000000044E5C0 "\t@"
 *   insn=0x000000000044E5C4 string=0x000000000044E5C8 "T="
 *   insn=0x000000000044E5EC string=0x000000000044E634 "hjz8"
 *   insn=0x000000000044E5F0 string=0x000000000044E5F4 ")=G"
 *   insn=0x000000000044E5F4 string=0x000000000044E5F8 "!"
 *   insn=0x000000000044E5FC string=0x000000000044E600 "\t"
 *   insn=0x000000000044E5FC string=0x000000000044E614 "\t"
 *   insn=0x000000000044E600 string=0x000000000044E604 "*"
 *   insn=0x000000000044E604 string=0x000000000044E608 "\n"
 *   insn=0x000000000044E610 string=0x000000000044E620 "?"
 *   insn=0x000000000044E614 string=0x000000000044E618 "*"
 *   insn=0x000000000044E618 string=0x000000000044E61C "\n"
 *   insn=0x000000000044E628 string=0x000000000044E62C "^o"
 *   insn=0x000000000044E62C string=0x000000000044E630 "<"
 *   insn=0x000000000044E63C string=0x000000000044E670 "Hg"
 *   insn=0x000000000044E658 string=0x000000000044E65C "?"
 *   insn=0x000000000044E660 string=0x000000000044E664 ":D"
 *   insn=0x000000000044E66C string=0x000000000044E6E0 "Hg"
 *   insn=0x000000000044E67C string=0x000000000044E680 "!\"
 *   insn=0x000000000044E68C string=0x000000000044E690 "!\n"
 *   insn=0x000000000044E68C string=0x000000000044E6A4 "!\n"
 *   insn=0x000000000044E690 string=0x00000000005952B0 "Control"
 *   insn=0x000000000044E694 string=0x000000000044E698 "!"
 *   insn=0x000000000044E698 string=0x000000000044E69C "]"
 *   insn=0x000000000044E69C string=0x00000000001FC810 "0'"
 *   insn=0x000000000044E6A4 string=0x00000000005952B8 "CenterPoint"
 *   insn=0x000000000044E6A8 string=0x000000000044E6AC "!"
 *   insn=0x000000000044E6B0 string=0x00000000001FA120 "0'"
 *   insn=0x000000000044E6B4 string=0x000000000044E6B8 "Hg"
 *   insn=0x000000000044E6B8 string=0x000000000044E6BC ""
 *   insn=0x000000000044E6BC string=0x000000000044E6C0 "\t"
 *   insn=0x000000000044E6C4 string=0x000000000044E6C8 "\t@"
 *   insn=0x000000000044E6D8 string=0x000000000044E6DC "q"
 *   insn=0x000000000044E6DC string=0x00000000001FC4A0 "0'"
 *   insn=0x000000000044E6F0 string=0x000000000044E6F4 "1a"
 *   insn=0x000000000044E6FC string=0x000000000044E700 "<"
 *   insn=0x000000000044E700 string=0x00000000001FBFF0 "0'"
 *   insn=0x000000000044E70C string=0x000000000044E710 ")"
 *   insn=0x000000000044E730 string=0x000000000044E734 "Z"
 *   insn=0x000000000044E734 string=0x000000000044E738 "_"
 *   insn=0x000000000044E740 string=0x000000000044E744 "|1"
 *   insn=0x000000000044E74C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044E75C string=0x00000000001FB710 "0'"
 *   insn=0x000000000044E77C string=0x000000000044E780 "t"
 *   insn=0x000000000044E78C string=0x000000000044E790 ")\n"
 *   insn=0x000000000044E798 string=0x000000000044E79C " "
 *   insn=0x000000000044E7A0 string=0x000000000044E7A8 "!@!"
 *   insn=0x000000000044E7A8 string=0x000000000044E7AC "\n"
 *   insn=0x000000000044E7C0 string=0x000000000044E7C4 "(}"
 *   insn=0x000000000044E7C4 string=0x000000000044E7C8 ")"
 *   insn=0x000000000044E7CC string=0x000000000044E7D0 " "
 *   insn=0x000000000044E7D0 string=0x000000000044E7D4 "g"
 *   insn=0x000000000044E7E8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044E7F0 string=0x000000000044E7F4 "\t}@"
 *   insn=0x000000000044E7F8 string=0x000000000044E7FC ")}"
 *   insn=0x000000000044E7FC string=0x000000000044E800 "}~"
 *   insn=0x000000000044E808 string=0x000000000044E80C "Y"
 *   insn=0x000000000044E818 string=0x000000000044E81C "`"
 *   insn=0x000000000044E854 string=0x000000000044E858 " "
 *   insn=0x000000000044E860 string=0x000000000044E864 "v"
 *   insn=0x000000000044E868 string=0x000000000044E86C "@"
 *   insn=0x000000000044E870 string=0x000000000044E874 "m"
 *   insn=0x000000000044E874 string=0x000000000044E878 "kA"
 *   insn=0x000000000044E8A8 string=0x000000000044E8AC "9y"
 *   insn=0x000000000044E8AC string=0x000000000044E8B0 "Z"
 *   insn=0x000000000044E8B4 string=0x000000000044E8B8 "(s"
 *   insn=0x000000000044E8C8 string=0x000000000044E8CC "Y"
 *   insn=0x000000000044E8D8 string=0x000000000044E8DC ",j"
 *   insn=0x000000000044E8DC string=0x000000000044E8E0 "!s"
 *   insn=0x000000000044E8E0 string=0x000000000044E8E4 "(LA"
 *   insn=0x000000000044E8E8 string=0x000000000044E920 ""
 *   insn=0x000000000044E8F8 string=0x000000000044E8FC "K!@"
 *   insn=0x000000000044E8FC string=0x000000000044E900 "La"
 *   insn=0x000000000044E900 string=0x000000000044E904 "MA"
 *   insn=0x000000000044E90C string=0x000000000044E910 ")"
 *   insn=0x000000000044E910 string=0x000000000044E914 "j"
 *   insn=0x000000000044E914 string=0x000000000044E918 "*"
 *   insn=0x000000000044E930 string=0x000000000044E934 "?"
 *   insn=0x000000000044E938 string=0x000000000044E93C "*!@"
 *   insn=0x000000000044E938 string=0x000000000044E970 "k"
 *   insn=0x000000000044E944 string=0x000000000044E948 "H"
 *   insn=0x000000000044E958 string=0x000000000044E95C ""
 *   insn=0x000000000044E960 string=0x000000000044E964 "\tk"
 *   insn=0x000000000044E964 string=0x000000000044E968 "(\t"
 *   insn=0x000000000044E970 string=0x000000000044E974 "\t\t"
 *   insn=0x000000000044E974 string=0x000000000044E978 "I"
 *   insn=0x000000000044E980 string=0x000000000044E984 "\n"
 *   insn=0x000000000044E988 string=0x000000000044E98C "()"
 *   insn=0x000000000044E98C string=0x000000000044E990 "1"
 *   insn=0x000000000044E994 string=0x000000000044E998 "1"
 *   insn=0x000000000044E9A0 string=0x000000000044E9A4 "B"
 *   insn=0x000000000044E9A8 string=0x000000000044E9AC "\nE@"
 *   insn=0x000000000044E9AC string=0x000000000044E9B0 "*E"
 *   insn=0x000000000044E9B0 string=0x000000000044E9B4 "?"
 *   insn=0x000000000044E9BC string=0x000000000044EA10 "7s"
 *   insn=0x000000000044E9C0 string=0x000000000044E9C4 "eB"
 *   insn=0x000000000044E9E4 string=0x000000000044E9E8 "\n"
 *   insn=0x000000000044E9F0 string=0x000000000044E9F4 "()"
 *   insn=0x000000000044EA68 string=0x000000000044EA6C "\t"
 *   insn=0x000000000044EA6C string=0x000000000044EA70 "`"
 *   insn=0x000000000044EA70 string=0x000000000044EA74 "a@"
 *   insn=0x000000000044EA74 string=0x000000000044EA78 "h"
 *   insn=0x000000000044EA7C string=0x000000000044EA80 "!@!"
 *   insn=0x000000000044EA98 string=0x00000000001F9ED0 "0'"
 *   insn=0x000000000044EAAC string=0x000000000044EAB0 "(s"
 *   insn=0x000000000044EAB0 string=0x000000000044EAB4 "%@"
 *   insn=0x000000000044EAB8 string=0x000000000044EABC "\t)@)\t@"
 *   insn=0x000000000044EABC string=0x000000000044EAC0 "\t@"
 *   insn=0x000000000044EAF4 string=0x000000000044EAF8 "\nk"
 *   insn=0x000000000044EAF8 string=0x000000000044EAFC "H1"
 *   insn=0x000000000044EAFC string=0x000000000044EB00 "KA"
 *   insn=0x000000000044EB08 string=0x000000000044EB0C ""
 *   insn=0x000000000044EB0C string=0x000000000044EB10 "+/"
 *   insn=0x000000000044EB10 string=0x000000000044EB14 "k"
 *   insn=0x000000000044EB14 string=0x000000000044EB18 "k5"
 *   insn=0x000000000044EB18 string=0x000000000044EB1C "k"
 *   insn=0x000000000044EB1C string=0x000000000044EB20 "k"
 *   insn=0x000000000044EB28 string=0x000000000044EB2C "J1"
 *   insn=0x000000000044EB2C string=0x000000000044EB30 "b"
 *   insn=0x000000000044EB34 string=0x000000000044EB38 "("
 *   insn=0x000000000044EB38 string=0x000000000044EBD8 "+E@"
 *   insn=0x000000000044EB50 string=0x000000000044EB54 ",3"
 *   insn=0x000000000044EB74 string=0x000000000044EB78 "?"
 *   insn=0x000000000044EB80 string=0x000000000044EB84 "B"
 *   insn=0x000000000044EB84 string=0x000000000044EB8C "l"
 *   insn=0x000000000044EB94 string=0x000000000044EB98 "k"
 *   insn=0x000000000044EBA0 string=0x000000000044EBA4 ")"
 *   insn=0x000000000044EBA8 string=0x000000000044EBAC "J1"
 *   insn=0x000000000044EBC8 string=0x000000000044EBCC "a"
 *   insn=0x000000000044EBD8 string=0x000000000044EBDC "KE"
 *   insn=0x000000000044EBDC string=0x000000000044EBE0 "_"
 *   insn=0x000000000044EBF0 string=0x00000000001F9650 "0'"
 *   insn=0x000000000044EBF4 string=0x000000000044EBF8 "\nk"
 *   insn=0x000000000044EBF8 string=0x000000000044EBFC "H1"
 *   insn=0x000000000044EBFC string=0x000000000044EC00 "KA"
 *   insn=0x000000000044EC04 string=0x000000000044EC08 ""
 *   insn=0x000000000044EC08 string=0x000000000044EC0C "+/"
 *   insn=0x000000000044EC0C string=0x000000000044EC10 "k"
 *   insn=0x000000000044EC10 string=0x000000000044EC14 "k5"
 *   insn=0x000000000044EC14 string=0x000000000044EC18 "k"
 *   insn=0x000000000044EC18 string=0x000000000044EC1C "k"
 *   insn=0x000000000044EC24 string=0x000000000044EC28 "J1"
 *   insn=0x000000000044EC2C string=0x000000000044ECC8 "+E@"
 *   insn=0x000000000044EC44 string=0x000000000044EC48 ",3"
 *   insn=0x000000000044EC64 string=0x000000000044EC68 "?"
 *   insn=0x000000000044EC70 string=0x000000000044EC74 "B"
 *   insn=0x000000000044EC74 string=0x000000000044EC7C "l"
 *   insn=0x000000000044EC84 string=0x000000000044EC88 "k"
 *   insn=0x000000000044EC90 string=0x000000000044EC94 ")"
 *   insn=0x000000000044EC98 string=0x000000000044EC9C "J1"
 *   insn=0x000000000044ECB8 string=0x000000000044ECBC "a"
 *   insn=0x000000000044ECC8 string=0x000000000044ECCC "KE"
 *   insn=0x000000000044ECCC string=0x000000000044ECD0 "_"
 *   insn=0x000000000044ECE0 string=0x000000000044ECE4 "\n\t@"
 *   insn=0x000000000044ECE8 string=0x000000000044ECEC "\t'"
 *   insn=0x000000000044ECEC string=0x000000000044ECF0 "*\t"
 *   insn=0x000000000044ECF0 string=0x000000000044ECF4 ""
 *   insn=0x000000000044ECF4 string=0x000000000044ECF8 "("
 *   insn=0x000000000044ED04 string=0x000000000044ED08 "w"
 *   insn=0x000000000044ED08 string=0x000000000044ED0C "}~"
 *   insn=0x000000000044ED10 string=0x000000000044ED14 " i"
 *   insn=0x000000000044ED28 string=0x000000000044ED2C "(U"
 *   insn=0x000000000044ED2C string=0x000000000044ED30 "U"
 *   insn=0x000000000044ED34 string=0x000000000044ED38 ""
 *   insn=0x000000000044ED3C string=0x000000000044ED40 "\t@"
 *   insn=0x000000000044ED4C string=0x000000000044ED50 ""
 *   insn=0x000000000044ED5C string=0x000000000044ED60 "@"
 *   insn=0x000000000044ED78 string=0x000000000044ED7C "y"
 *   insn=0x000000000044ED7C string=0x000000000044ED80 "h"
 *   insn=0x000000000044ED88 string=0x000000000044ED8C "!"
 *   insn=0x000000000044ED8C string=0x000000000044EDB0 "H"
 *   insn=0x000000000044EDB0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044EDB8 string=0x000000000044EDBC "="
 *   insn=0x000000000044EDBC string=0x000000000044EDC0 ":"
 *   insn=0x000000000044EDBC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044EDE0 string=0x000000000044EDE4 "5"
 *   insn=0x000000000044EDE8 string=0x000000000044EDEC ""
 *   insn=0x000000000044EDF8 string=0x000000000044EDFC "\t@"
 *   insn=0x000000000044EE08 string=0x000000000044EE0C ""
 *   insn=0x000000000044EE18 string=0x000000000044EE1C "@"
 *   insn=0x000000000044EE24 string=0x000000000044EE28 " "
 *   insn=0x000000000044EE38 string=0x000000000044EE3C "J"
 *   insn=0x000000000044EE40 string=0x000000000044EE44 "(a"
 *   insn=0x000000000044EE50 string=0x000000000044EE54 "J=G"
 *   insn=0x000000000044EE54 string=0x000000000044EE58 ")!"
 *   insn=0x000000000044EE58 string=0x000000000044EE5C "j"
 *   insn=0x000000000044EE5C string=0x000000000044EE60 "*"
 *   insn=0x000000000044EE5C string=0x000000000044EE88 "*"
 *   insn=0x000000000044EE60 string=0x000000000044EE64 "K"
 *   insn=0x000000000044EE64 string=0x000000000044EE68 "+"
 *   insn=0x000000000044EE6C string=0x000000000044EE70 "_"
 *   insn=0x000000000044EE7C string=0x000000000044EE80 "Im"
 *   insn=0x000000000044EE80 string=0x000000000044EE84 "\t"
 *   insn=0x000000000044EE88 string=0x000000000044EE8C "K"
 *   insn=0x000000000044EE8C string=0x000000000044EE90 "+"
 *   insn=0x000000000044EE90 string=0x000000000044EE94 "_"
 *   insn=0x000000000044EE94 string=0x000000000044EE98 ""
 *   insn=0x000000000044EEA8 string=0x000000000044EEAC "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::PODLoader::CreateSkeleton(float32x2_t *this@<X0>, __int64 *a2@<X8>)
{
  unsigned __int64 v3; // x23
  void *v4; // x19
  int v5; // w20
  int v6; // w8
  __int64 v7; // x24
  int *v8; // x25
  __int64 v9; // x8
  int v10; // w28
  unsigned __int64 v11; // x26
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14; // x25
  _DWORD *v15; // x1
  const char *v16; // x20
  __int64 v17; // x8
  unsigned __int32 v18; // w20
  unsigned __int32 *v19; // x0
  void *v20; // x0
  __int64 v21; // x22
  float v22; // s1
  __int64 v23; // x20
  unsigned __int64 v24; // x0
  __int64 v25; // x0
  void *v26; // x8
  unsigned __int64 v27; // x0
  __int64 v28; // x8
  void *v29; // x0
  __int64 i; // x24
  __int64 v31; // x28
  __int64 v32; // x25
  __int64 v33; // x26
  const char *v34; // x20
  size_t v35; // x0
  signed __int32 v36; // w8
  float32x2_t *v37; // x10
  float32x2_t *v38; // x9
  signed __int32 v39; // w11
  bool v40; // cc
  float32x2_t **v41; // x11
  int v42; // w8
  Caver::PODLoader *v43; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  int *v47; // x8
  __int128 *v48; // x9
  int v49; // t1
  __int128 v50; // q0
  __int64 v51; // x8
  __int128 v52; // q1
  __int128 v53; // q1
  __int64 v54; // x23
  _OWORD **v55; // x20
  float32x2_t *v56; // x27
  __int64 v57; // x23
  float *v58; // t1
  float v59; // s0
  float v60; // s1
  float v61; // s2
  float v62; // s3
  unsigned __int64 v63; // d0
  float v64; // s1
  const Caver::Quaternion *v65; // x1
  int *v66; // x8
  int v67; // w9
  int v68; // w10
  __int64 v69; // x10
  unsigned __int64 v70; // x8
  __int64 v71; // x11
  unsigned __int64 v72; // x11
  __int128 *v73; // x9
  _DWORD *v74; // x10
  __int64 v75; // x12
  unsigned __int64 v76; // x13
  unsigned __int64 v77; // x14
  unsigned __int64 v78; // x12
  unsigned __int64 v79; // x12
  char *v80; // x15
  bool v81; // w12
  __int128 *v82; // x15
  __int64 v83; // x13
  __int64 v84; // x10
  __int128 *v85; // x13
  __int64 v86; // x14
  __int128 v87; // q0
  __int128 v88; // q1
  int v89; // t1
  __int64 v90; // x10
  unsigned __int64 v91; // x8
  __int64 v92; // x11
  unsigned __int64 v93; // x11
  _BYTE *v94; // x9
  _DWORD *v95; // x10
  __int64 v96; // x12
  unsigned __int64 v97; // x13
  unsigned __int64 v98; // x14
  unsigned __int64 v99; // x12
  unsigned __int64 v100; // x12
  _BYTE *v101; // x15
  bool v102; // w12
  __int128 *v103; // x15
  __int64 v104; // x13
  _OWORD *v105; // x13
  __int64 v106; // x14
  __int128 v107; // q0
  __int128 v108; // q1
  int v109; // t1
  _QWORD *v110; // x8
  __int64 v111; // x9
  __int64 v112; // x8
  _QWORD *v113; // x21
  __int64 v114; // x8
  Caver::PODLoader *v116; // [xsp+78h] [xbp-108h]
  unsigned __int32 v117; // [xsp+80h] [xbp-100h] BYREF
  unsigned __int64 v118; // [xsp+84h] [xbp-FCh]
  float v119; // [xsp+8Ch] [xbp-F4h]
  __int64 v120; // [xsp+90h] [xbp-F0h]
  _QWORD *v121; // [xsp+98h] [xbp-E8h]
  _BYTE v122[64]; // [xsp+A0h] [xbp-E0h] BYREF
  __int128 v123; // [xsp+E0h] [xbp-A0h] BYREF
  __int128 v124; // [xsp+F0h] [xbp-90h] BYREF
  __int128 v125; // [xsp+100h] [xbp-80h]
  __int128 v126; // [xsp+110h] [xbp-70h]
  _QWORD v127[2]; // [xsp+120h] [xbp-60h] BYREF

  v127[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = this->n64_u64[0];
  v4 = (void *)operator new[](*(unsigned int *)(this->n64_u64[0] + 72));
  memset(v4, 0, *(unsigned int *)(v3 + 72));
  v5 = *(_DWORD *)(v3 + 72);
  v6 = v5 - 1;
  if ( v5 - 1 >= 0 )
  {
    v7 = v6;
    v8 = (int *)(*(_QWORD *)(v3 + 80) + 96LL * v6 + 20);
    do
    {
      if ( !strncmp(*(const char **)(v8 - 3), "Bone", 4u) || *((_BYTE *)v4 + v7) )
      {
        v9 = *v8;
        if ( (v9 & 0x80000000) == 0 )
          *((_BYTE *)v4 + v9) = 1;
      }
      --v7;
      v8 -= 24;
    }
    while ( (v7 & 0x80000000) == 0 );
  }
  this[4].n64_u32[0] = 0;
  this[20].n64_u64[0] = Caver::Vector3Zero;
  this[21].n64_u32[0] = dword_6E9F38;
  if ( !v5 )
    goto LABEL_95;
  v10 = 0;
  v11 = 0;
  do
  {
    v14 = *(_QWORD *)(v3 + 80);
    if ( *((_BYTE *)v4 + v11)
      || (v16 = *(const char **)(v14 + 96 * v11 + 8), !strncmp(v16, "Bone", 4u)) && !strstr(v16, "Control") )
    {
      LODWORD(v123) = v11;
      *(_DWORD *)std::map<int,int>::operator[]() = v10;
      LODWORD(v123) = v11;
      v15 = (_DWORD *)this[12].n64_u64[0];
      if ( v15 == (_DWORD *)this[13].n64_u64[0] )
      {
        std::vector<int>::_M_insert_aux((_DWORD)this + 88, v15);
      }
      else
      {
        *v15 = v11;
        this[12].n64_u64[0] = (unsigned __int64)(v15 + 1);
      }
      v18 = this[4].n64_u32[0];
      sub_566BB8((int)&v123, *(char **)(v14 + 96 * v11 + 8));
      std::map<std::string,int>::operator[]();
      *v19 = v18;
      v20 = (void *)(v123 - 24);
      if ( (__int64 *)(v123 - 24) != &qword_6FD2E0 )
      {
        v12 = (unsigned int *)(v123 - 8);
        if ( &pthread_create )
        {
          do
            v13 = __ldaxr(v12);
          while ( __stlxr(v13 - 1, v12) );
        }
        else
        {
          v13 = (*v12)--;
        }
        if ( v13 <= 0 )
          operator delete(v20);
      }
      v3 = this->n64_u64[0];
      v10 = this[4].n64_u32[0] + 1;
      this[4].n64_u32[0] = v10;
    }
    else if ( !strcmp(v16, "CenterPoint") )
    {
      v17 = *(_QWORD *)(v14 + 96 * v11 + 40);
      this[20].n64_u64[0] = *(unsigned __int64 *)v17;
      this[21].n64_u32[0] = *(_DWORD *)(v17 + 8);
    }
    ++v11;
  }
  while ( v11 < *(unsigned int *)(v3 + 72) );
  if ( v10 )
  {
    v21 = operator new(0x38u);
    Caver::Skeleton::Skeleton((Caver::Skeleton *)v21, v10);
    v120 = v21;
    boost::detail::shared_count::shared_count<Caver::Skeleton>();
    boost::detail::sp_enable_shared_from_this();
    v22 = this[21].n64_f32[0];
    *(float32x2_t *)(v21 + 40) = vneg_f32(this[20]);
    *(_QWORD *)(v21 + 32) = 0x700000003LL;
    *(float *)(v21 + 48) = -v22;
    *(_OWORD *)(v21 + 16) = xmmword_5952A0;
    v23 = this[4].n64_i32[0];
    if ( is_mul_ok(3 * v23, 4u) )
      v24 = 12 * v23;
    else
      v24 = -1;
    v25 = operator new[](v24);
    v26 = (void *)this[2].n64_u64[0];
    this[2].n64_u64[0] = v25;
    if ( v26 )
    {
      operator delete[](v26);
      LODWORD(v23) = this[4].n64_u32[0];
    }
    if ( is_mul_ok(4 * (int)v23, 4u) )
      v27 = 16LL * (_DWORD)v23;
    else
      v27 = -1;
    v28 = operator new[](v27);
    v29 = (void *)this[3].n64_u64[0];
    this[3].n64_u64[0] = v28;
    if ( v29 )
    {
      operator delete[](v29);
      LODWORD(v23) = this[4].n64_u32[0];
    }
    if ( (int)v23 >= 1 )
    {
      v116 = (Caver::PODLoader *)&this[6];
      for ( i = 0; i < this[4].n64_i32[0]; ++i )
      {
        v31 = *(_QWORD *)(this->n64_u64[0] + 80);
        v32 = *(int *)(this[11].n64_u64[0] + 4 * i);
        v33 = *(_QWORD *)(v120 + 8);
        v34 = *(const char **)(v31 + 96 * v32 + 8);
        v35 = strlen(v34);
        sub_56918C(v33 + 144 * i, v34, v35);
        v36 = *(_DWORD *)(v31 + 96 * v32 + 20);
        if ( v36 < 0 )
        {
          v42 = -1;
        }
        else
        {
          v37 = (float32x2_t *)this[7].n64_u64[0];
          if ( v37 )
          {
            v38 = this + 6;
            do
            {
              v39 = v37[4].n64_i32[0];
              v40 = v39 < v36;
              if ( v39 >= v36 )
                v41 = (float32x2_t **)&v37[2];
              else
                v41 = (float32x2_t **)&v37[3];
              if ( !v40 )
                v38 = v37;
              v37 = *v41;
            }
            while ( *v41 );
          }
          else
          {
            v38 = this + 6;
          }
          if ( v38 == (float32x2_t *)v116 )
            goto LABEL_59;
          v43 = (Caver::PODLoader *)(v36 >= (signed __int32)v38[4].n64_u32[0] ? v38 : &this[6]);
          if ( v43 == v116 )
            goto LABEL_59;
          v42 = *(_DWORD *)std::map<int,int>::operator[]();
        }
        *(_DWORD *)(v33 + 144 * i + 8) = v42;
LABEL_59:
        v44 = *(int *)(v33 + 144 * i + 8);
        if ( (v44 & 0x80000000) != 0 )
        {
          *(_OWORD *)v122 = Caver::Matrix4::identityMatrix;
          *(_OWORD *)&v122[16] = xmmword_6E9F00;
          *(_OWORD *)&v122[32] = xmmword_6E9F10;
          *(_OWORD *)&v122[48] = xmmword_6E9F20;
          v123 = Caver::Matrix4::identityMatrix;
          v124 = xmmword_6E9F00;
          v125 = xmmword_6E9F10;
          v126 = xmmword_6E9F20;
        }
        else
        {
          v45 = *(_QWORD *)(v120 + 8);
          v46 = v45 + 144 * v44;
          v40 = v46 + 76 > (unsigned __int64)&v123;
          v47 = (int *)(v46 + 12);
          if ( v40 && v47 < (int *)v127 )
          {
            v48 = &v123;
            do
            {
              v49 = *v47++;
              *(_DWORD *)v48 = v49;
              v48 = (__int128 *)((char *)v48 + 4);
            }
            while ( v48 < (__int128 *)v127 );
          }
          else
          {
            v50 = *(_OWORD *)v47;
            v51 = v45 + 144 * v44;
            v52 = *(_OWORD *)(v51 + 28);
            v123 = v50;
            v124 = v52;
            v53 = *(_OWORD *)(v51 + 60);
            v125 = *(_OWORD *)(v51 + 44);
            v126 = v53;
          }
        }
        v54 = v31 + 96 * v32;
        v55 = (_OWORD **)(v54 + 56);
        v56 = *(float32x2_t **)(v54 + 56);
        v58 = *(float **)(v54 + 40);
        v57 = v54 + 40;
        v59 = this[21].n64_f32[1];
        v60 = *v58;
        v61 = v58[1];
        v62 = v58[2];
        *(_DWORD *)&v122[60] = 1065353216;
        *(float *)&v122[56] = v59 * v62;
        *(float *)&v122[48] = v59 * v60;
        *(float *)&v122[52] = v59 * v61;
        *(_OWORD *)v122 = xmmword_583490;
        *(_OWORD *)&v122[16] = xmmword_5837E0;
        *(_OWORD *)&v122[32] = xmmword_5837F0;
        C_Matrix4Mul((const float *)&v123, (const float *)v122, (float *)&v123);
        v63 = vneg_f32((float32x2_t)v56->n64_u64[0]).n64_u64[0];
        v64 = -v56[1].n64_f32[0];
        v117 = v56[1].n64_u32[1];
        v118 = v63;
        v119 = v64;
        Caver::Matrix4::FromRotationQuaternion((__int64 *)v122, (Caver::Matrix4 *)&v117, v65);
        C_Matrix4Mul((const float *)&v123, (const float *)v122, (float *)&v123);
        v66 = *(int **)(v31 + 96 * v32 + 72);
        v67 = *v66;
        v68 = v66[1];
        LODWORD(v66) = v66[2];
        *(_OWORD *)&v122[4] = 0u;
        *(_OWORD *)&v122[24] = 0u;
        *(_DWORD *)v122 = v67;
        *(_DWORD *)&v122[40] = (_DWORD)v66;
        *(_DWORD *)&v122[20] = v68;
        *(_OWORD *)&v122[44] = 0u;
        *(_DWORD *)&v122[60] = 1065353216;
        C_Matrix4Mul((const float *)&v123, (const float *)v122, (float *)&v123);
        v69 = v33 + 144 * i;
        v70 = v69 + 76;
        v71 = v69 + 16;
        if ( v69 + 76 > (unsigned __int64)(v69 + 16) )
          v71 = v69 + 76;
        v72 = ((unsigned __int64)(v71 - 144 * i - v33 - 13) >> 2) + 1;
        v73 = &v123;
        v74 = (_DWORD *)(v69 + 12);
        if ( v72 < 8 )
          goto LABEL_99;
        v75 = v33 + 144 * i;
        v76 = v75 + 12;
        v77 = v75 + 76;
        v78 = v75 + 16;
        if ( v77 > v78 )
          v78 = v77;
        v79 = (v78 - 144 * i - v33 - 13) & 0xFFFFFFFFFFFFFFFCLL;
        v80 = (char *)&v123 + v79 + 4;
        v81 = (unsigned __int64)&v123 < v76 + v79 + 4;
        if ( v76 < (unsigned __int64)v80 && v81 )
          goto LABEL_99;
        v82 = &v124;
        v83 = v33 + 144 * i;
        v84 = 4 * (v72 & 0x7FFFFFFFFFFFFFF8LL);
        v73 = (__int128 *)((char *)&v123 + v84);
        v74 = (_DWORD *)(v83 + v84 + 12);
        v85 = (__int128 *)(v83 + 28);
        v86 = v72 & 0x7FFFFFFFFFFFFFF8LL;
        do
        {
          v87 = *(v82 - 1);
          v88 = *v82;
          v86 -= 8;
          v82 += 2;
          *(v85 - 1) = v87;
          *v85 = v88;
          v85 += 2;
        }
        while ( v86 );
        if ( v72 != (v72 & 0x7FFFFFFFFFFFFFF8LL) )
        {
LABEL_99:
          do
          {
            v89 = *(_DWORD *)v73;
            v73 = (__int128 *)((char *)v73 + 4);
            *v74++ = v89;
          }
          while ( (unsigned __int64)v74 < v70 );
        }
        Caver::Matrix4::Inverse((__int64 *)v122, (Caver::Matrix4 *)&v123);
        v90 = v33 + 144 * i;
        v91 = v90 + 140;
        v92 = v90 + 80;
        if ( v90 + 140 > (unsigned __int64)(v90 + 80) )
          v92 = v90 + 140;
        v93 = ((unsigned __int64)(v92 - 144 * i - v33 - 77) >> 2) + 1;
        v94 = v122;
        v95 = (_DWORD *)(v90 + 76);
        if ( v93 < 8 )
          goto LABEL_100;
        v96 = v33 + 144 * i;
        v97 = v96 + 76;
        v98 = v96 + 140;
        v99 = v96 + 80;
        if ( v98 > v99 )
          v99 = v98;
        v100 = (v99 - 144 * i - v33 - 77) & 0xFFFFFFFFFFFFFFFCLL;
        v101 = &v122[v100 + 4];
        v102 = (unsigned __int64)v122 < v97 + v100 + 4;
        if ( v97 < (unsigned __int64)v101 && v102 )
          goto LABEL_100;
        v103 = (__int128 *)&v122[16];
        v104 = v33 + 144 * i;
        v94 = &v122[4 * (v93 & 0x7FFFFFFFFFFFFFF8LL)];
        v95 = (_DWORD *)(v104 + 4 * (v93 & 0x7FFFFFFFFFFFFFF8LL) + 76);
        v105 = (_OWORD *)(v104 + 92);
        v106 = v93 & 0x7FFFFFFFFFFFFFF8LL;
        do
        {
          v107 = *(v103 - 1);
          v108 = *v103;
          v106 -= 8;
          v103 += 2;
          *(v105 - 1) = v107;
          *v105 = v108;
          v105 += 2;
        }
        while ( v106 );
        if ( v93 != (v93 & 0x7FFFFFFFFFFFFFF8LL) )
        {
LABEL_100:
          do
          {
            v109 = *(_DWORD *)v94;
            v94 += 4;
            *v95++ = v109;
          }
          while ( (unsigned __int64)v95 < v91 );
        }
        v110 = *(_QWORD **)v57;
        v111 = this[2].n64_u64[0] + 12 * i;
        *(_DWORD *)(v111 + 8) = *(_DWORD *)(*(_QWORD *)v57 + 8LL);
        *(_QWORD *)v111 = *v110;
        v112 = 16LL * (_DWORD)i;
        *(_OWORD *)(this[3].n64_u64[0] + v112) = **v55;
      }
    }
    v113 = v121;
    *a2 = v120;
    a2[1] = (__int64)v113;
    if ( v113 )
    {
      if ( !v113[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v113 + 16LL))(v113);
        v114 = v113[2] - 1LL;
        v113[2] = v114;
        if ( !v114 )
          (*(void (__fastcall **)(_QWORD *))(*v113 + 24LL))(v113);
      }
    }
  }
  else
  {
LABEL_95:
    *a2 = 0;
    a2[1] = 0;
  }
  operator delete[](v4);
}

