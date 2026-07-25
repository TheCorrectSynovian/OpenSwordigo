/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044EEB8
 * Mangled: _ZN5Caver9PODLoader10CreateMeshEi
 * Demangled: Caver::PODLoader::CreateMesh(int)
 *
 * Callers: 2
 *   0x00000000001F9B30  Caver::PODLoader::CreateMesh(int)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *
 * Callees: 27
 *   0x00000000001F39E0  Caver::Mesh::Mesh(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9480  Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FAB90  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x00000000001FB210  Caver::StringByRemovingPathExtension(std::string const&)
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *   0x00000000001FC850  Caver::Mesh::AllocVertexBuffer(int)
 *   0x00000000001FD600  Caver::Mesh::AllocIndexBuffer(int)
 *   0x00000000001FF070  Caver::Mesh::SetNumTexCoordSets(int)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFAF0  Caver::MeshData::valueSize(void)
 *   0x00000000001FFC60  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203220  PVRTModelPODCountIndices(SPODMesh const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 354
 *   insn=0x000000000044EED4 string=0x000000000044EED8 "W"
 *   insn=0x000000000044EEF4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044EEFC string=0x00000000001F39E0 "P'"
 *   insn=0x000000000044EF08 string=0x000000000044EF0C "!"
 *   insn=0x000000000044EF0C string=0x00000000001FAB90 "0'"
 *   insn=0x000000000044EF24 string=0x000000000044EF28 "k"
 *   insn=0x000000000044EF2C string=0x000000000044EF30 "\t)@"
 *   insn=0x000000000044EF3C string=0x000000000044EF40 "9"
 *   insn=0x000000000044EF40 string=0x000000000044EF44 "\n+"
 *   insn=0x000000000044EF44 string=0x000000000044EF48 "5c\n"
 *   insn=0x000000000044EF4C string=0x000000000044EF50 "j"
 *   insn=0x000000000044EF50 string=0x000000000044EF54 "9@"
 *   insn=0x000000000044EF54 string=0x000000000044EF58 ")"
 *   insn=0x000000000044EF58 string=0x000000000044EF5C "\n"
 *   insn=0x000000000044EF5C string=0x000000000044EF60 "(!\n"
 *   insn=0x000000000044EF60 string=0x000000000044EF64 "\tAC"
 *   insn=0x000000000044EF64 string=0x000000000044EF68 "\n=@"
 *   insn=0x000000000044EF68 string=0x000000000044EF6C "iQ"
 *   insn=0x000000000044EF6C string=0x000000000044EF70 "j1"
 *   insn=0x000000000044EF70 string=0x000000000044EF74 "\t!@"
 *   insn=0x000000000044EF74 string=0x000000000044EF78 "j"
 *   insn=0x000000000044EF78 string=0x000000000044EF7C "I@"
 *   insn=0x000000000044EF7C string=0x000000000044EF80 "IY"
 *   insn=0x000000000044EF80 string=0x000000000044EF84 "K1"
 *   insn=0x000000000044EF84 string=0x000000000044EF88 "\t"
 *   insn=0x000000000044EF88 string=0x000000000044EF8C "j"
 *   insn=0x000000000044EF8C string=0x000000000044EF90 "U@"
 *   insn=0x000000000044EF90 string=0x000000000044EF94 "Ia"
 *   insn=0x000000000044EF94 string=0x000000000044EF98 "K1"
 *   insn=0x000000000044EF98 string=0x000000000044EF9C "\tY@"
 *   insn=0x000000000044EF9C string=0x000000000044EFA0 "j"
 *   insn=0x000000000044EFA0 string=0x000000000044EFA4 "I"
 *   insn=0x000000000044EFA4 string=0x000000000044EFA8 "\t"
 *   insn=0x000000000044EFAC string=0x000000000044F09C "+"
 *   insn=0x000000000044EFB0 string=0x000000000044EFB4 ")1@"
 *   insn=0x000000000044EFB4 string=0x000000000044EFB8 "!yh"
 *   insn=0x000000000044EFD0 string=0x000000000044EFD4 "h"
 *   insn=0x000000000044EFD0 string=0x00000000001FB210 "0'"
 *   insn=0x000000000044EFFC string=0x000000000044F000 "h"
 *   insn=0x000000000044F004 string=0x000000000044F008 "h"
 *   insn=0x000000000044F004 string=0x00000000001FA350 "0'"
 *   insn=0x000000000044F014 string=0x000000000044F018 "f"
 *   insn=0x000000000044F01C string=0x000000000044F020 "i"
 *   insn=0x000000000044F024 string=0x000000000044F028 "@"
 *   insn=0x000000000044F024 string=0x000000000044F034 "(m@"
 *   insn=0x000000000044F028 string=0x000000000044F02C ""
 *   insn=0x000000000044F02C string=0x000000000044F030 ""
 *   insn=0x000000000044F034 string=0x000000000044F038 " m"
 *   insn=0x000000000044F03C string=0x000000000044F040 "\t\t@"
 *   insn=0x000000000044F040 string=0x000000000044F044 ")"
 *   insn=0x000000000044F044 string=0x000000000044F048 "\t\t"
 *   insn=0x000000000044F048 string=0x000000000044F04C "@"
 *   insn=0x000000000044F04C string=0x000000000044F074 "\t"
 *   insn=0x000000000044F050 string=0x000000000044F054 "@"
 *   insn=0x000000000044F054 string=0x000000000044F058 ""
 *   insn=0x000000000044F058 string=0x000000000044F05C ""
 *   insn=0x000000000044F05C string=0x000000000044F060 "a"
 *   insn=0x000000000044F060 string=0x000000000044F064 ""
 *   insn=0x000000000044F064 string=0x000000000044F068 ""
 *   insn=0x000000000044F06C string=0x000000000044F070 ""
 *   insn=0x000000000044F074 string=0x000000000044F078 ")"
 *   insn=0x000000000044F07C string=0x000000000044F080 " "
 *   insn=0x000000000044F084 string=0x000000000044F088 "`"
 *   insn=0x000000000044F09C string=0x000000000044F0A0 ":c"
 *   insn=0x000000000044F0A0 string=0x000000000044F0A4 "H"
 *   insn=0x000000000044F0A4 string=0x000000000044F0A8 "H"
 *   insn=0x000000000044F0A8 string=0x000000000044F110 "h"
 *   insn=0x000000000044F0AC string=0x000000000044F0B0 "\"
 *   insn=0x000000000044F0B4 string=0x000000000044F0B8 "+"
 *   insn=0x000000000044F0B8 string=0x000000000044F0BC ";c"
 *   insn=0x000000000044F0BC string=0x000000000044F0C0 "`"
 *   insn=0x000000000044F0C0 string=0x000000000044F0C4 "h"
 *   insn=0x000000000044F0C8 string=0x000000000044F0CC "M"
 *   insn=0x000000000044F0CC string=0x000000000044F0D0 "h"
 *   insn=0x000000000044F0CC string=0x00000000001FD600 "0'"
 *   insn=0x000000000044F0D0 string=0x000000000044F0D4 "i"
 *   insn=0x000000000044F0D4 string=0x000000000044F0D8 "A"
 *   insn=0x000000000044F0DC string=0x000000000044F0E0 ""}"
 *   insn=0x000000000044F0E4 string=0x000000000044F0E8 "+"
 *   insn=0x000000000044F0E8 string=0x000000000044F0EC "(c"
 *   insn=0x000000000044F0EC string=0x000000000044F0F0 ""
 *   insn=0x000000000044F0F0 string=0x000000000044F0F4 ""
 *   insn=0x000000000044F0F8 string=0x000000000044F0FC "("
 *   insn=0x000000000044F0FC string=0x000000000044F100 ")\n"
 *   insn=0x000000000044F100 string=0x000000000044F108 "("
 *   insn=0x000000000044F10C string=0x000000000044F124 "i"
 *   insn=0x000000000044F118 string=0x000000000044F11C "\n"
 *   insn=0x000000000044F11C string=0x000000000044F144 "+"
 *   insn=0x000000000044F124 string=0x000000000044F128 "\n+"
 *   insn=0x000000000044F128 string=0x000000000044F12C "*c\n"
 *   insn=0x000000000044F12C string=0x000000000044F130 "(\t"
 *   insn=0x000000000044F130 string=0x000000000044F134 "HAA"
 *   insn=0x000000000044F134 string=0x000000000044F138 "*"
 *   insn=0x000000000044F138 string=0x000000000044F13C "("
 *   insn=0x000000000044F13C string=0x000000000044F140 "*"
 *   insn=0x000000000044F144 string=0x000000000044F148 "6c"
 *   insn=0x000000000044F150 string=0x000000000044F154 "+"
 *   insn=0x000000000044F150 string=0x000000000044F1A8 "`"
 *   insn=0x000000000044F154 string=0x000000000044F158 "(c"
 *   insn=0x000000000044F15C string=0x000000000044F160 ""
 *   insn=0x000000000044F160 string=0x000000000044F164 "h"
 *   insn=0x000000000044F164 string=0x000000000044F168 "\tyz"
 *   insn=0x000000000044F168 string=0x000000000044F16C "h"
 *   insn=0x000000000044F174 string=0x000000000044F178 "?"
 *   insn=0x000000000044F17C string=0x000000000044F180 ")D"
 *   insn=0x000000000044F194 string=0x00000000001FC4A0 "0'"
 *   insn=0x000000000044F198 string=0x000000000044F19C "Z"
 *   insn=0x000000000044F19C string=0x000000000044F1A0 "_"
 *   insn=0x000000000044F1A8 string=0x000000000044F1AC "+"
 *   insn=0x000000000044F1AC string=0x000000000044F1B0 "(c"
 *   insn=0x000000000044F1B0 string=0x000000000044F1B4 "\t"
 *   insn=0x000000000044F1B4 string=0x000000000044F1B8 "\nA"
 *   insn=0x000000000044F1BC string=0x000000000044F1C0 "\t"
 *   insn=0x000000000044F1C0 string=0x000000000044F1C4 "\n"
 *   insn=0x000000000044F1D0 string=0x000000000044F1D4 "h"
 *   insn=0x000000000044F1D4 string=0x000000000044F1D8 "\tA"
 *   insn=0x000000000044F1D8 string=0x000000000044F1DC "?"
 *   insn=0x000000000044F1DC string=0x000000000044F1E0 "k"
 *   insn=0x000000000044F1E0 string=0x000000000044F1E4 "\n+"
 *   insn=0x000000000044F1E4 string=0x000000000044F1E8 "*c\n"
 *   insn=0x000000000044F1E8 string=0x000000000044F1EC "JM@"
 *   insn=0x000000000044F1EC string=0x000000000044F1F0 "?"
 *   insn=0x000000000044F1F4 string=0x000000000044F1F8 ")@"
 *   insn=0x000000000044F200 string=0x000000000044F214 "?\t"
 *   insn=0x000000000044F204 string=0x000000000044F208 "A"
 *   insn=0x000000000044F208 string=0x000000000044F30C "+"
 *   insn=0x000000000044F20C string=0x000000000044F210 "?"
 *   insn=0x000000000044F218 string=0x000000000044F21C ","
 *   insn=0x000000000044F228 string=0x000000000044F238 ",\n"
 *   insn=0x000000000044F230 string=0x000000000044F234 "'"
 *   insn=0x000000000044F24C string=0x000000000044F250 """
 *   insn=0x000000000044F258 string=0x000000000044F25C "@N"
 *   insn=0x000000000044F268 string=0x000000000044F26C "cN$"
 *   insn=0x000000000044F26C string=0x000000000044F270 "$"
 *   insn=0x000000000044F274 string=0x000000000044F278 "2"
 *   insn=0x000000000044F278 string=0x000000000044F27C "R"
 *   insn=0x000000000044F27C string=0x000000000044F280 "R"
 *   insn=0x000000000044F280 string=0x000000000044F284 "E"
 *   insn=0x000000000044F284 string=0x000000000044F288 "2<"
 *   insn=0x000000000044F288 string=0x000000000044F28C "R"
 *   insn=0x000000000044F28C string=0x000000000044F290 "R"
 *   insn=0x000000000044F290 string=0x000000000044F294 "E"
 *   insn=0x000000000044F2A0 string=0x000000000044F2A4 "e"
 *   insn=0x000000000044F2A8 string=0x000000000044F2AC "f"
 *   insn=0x000000000044F2AC string=0x000000000044F2B0 "!"
 *   insn=0x000000000044F2B0 string=0x000000000044F2B4 "1"
 *   insn=0x000000000044F2D8 string=0x000000000044F2DC "J"
 *   insn=0x000000000044F2DC string=0x000000000044F2E0 "k"
 *   insn=0x000000000044F2F8 string=0x000000000044F2FC "Ja"
 *   insn=0x000000000044F300 string=0x000000000044F304 "ka"
 *   insn=0x000000000044F304 string=0x000000000044F308 ""
 *   insn=0x000000000044F310 string=0x000000000044F314 "a"
 *   insn=0x000000000044F318 string=0x000000000044F31C "+c"
 *   insn=0x000000000044F320 string=0x000000000044F324 "Mi,"
 *   insn=0x000000000044F324 string=0x000000000044F328 "m"
 *   insn=0x000000000044F32C string=0x000000000044F330 "-i,"
 *   insn=0x000000000044F334 string=0x000000000044F338 "!"
 *   insn=0x000000000044F340 string=0x000000000044F344 "Ni-"
 *   insn=0x000000000044F344 string=0x000000000044F348 "n"
 *   insn=0x000000000044F348 string=0x000000000044F34C "kA"
 *   insn=0x000000000044F350 string=0x000000000044F354 "Hi,"
 *   insn=0x000000000044F354 string=0x000000000044F358 ".i-"
 *   insn=0x000000000044F358 string=0x000000000044F35C "+i,"
 *   insn=0x000000000044F35C string=0x000000000044F360 "K"
 *   insn=0x000000000044F360 string=0x000000000044F364 ",\n"
 *   insn=0x000000000044F360 string=0x000000000044F3C8 "+"
 *   insn=0x000000000044F368 string=0x000000000044F36C "K"
 *   insn=0x000000000044F370 string=0x000000000044F374 "-yh"
 *   insn=0x000000000044F37C string=0x000000000044F398 "Myh"
 *   insn=0x000000000044F394 string=0x000000000044F3AC "Pyh"
 *   insn=0x000000000044F3A4 string=0x000000000044F3BC ""
 *   insn=0x000000000044F3B4 string=0x000000000044F3B8 "\n"
 *   insn=0x000000000044F3C8 string=0x000000000044F3CC ";c"
 *   insn=0x000000000044F3CC string=0x000000000044F3D0 "h"
 *   insn=0x000000000044F3D0 string=0x000000000044F3D4 "("
 *   insn=0x000000000044F3D4 string=0x000000000044F3D8 "\t+"
 *   insn=0x000000000044F3D8 string=0x000000000044F3DC ")c\t"
 *   insn=0x000000000044F3E0 string=0x000000000044F3E4 ")A@"
 *   insn=0x000000000044F3E4 string=0x000000000044F3E8 "`"
 *   insn=0x000000000044F3E8 string=0x000000000044F3EC "5}"
 *   insn=0x000000000044F3F4 string=0x000000000044F3F8 "h"
 *   insn=0x000000000044F3F4 string=0x00000000001FC850 "0'"
 *   insn=0x000000000044F3F8 string=0x000000000044F3FC "a"
 *   insn=0x000000000044F40C string=0x000000000044F410 "\t"
 *   insn=0x000000000044F410 string=0x000000000044F530 "v"
 *   insn=0x000000000044F414 string=0x000000000044F418 "I"
 *   insn=0x000000000044F420 string=0x000000000044F424 "Lyh"
 *   insn=0x000000000044F42C string=0x000000000044F430 "m"
 *   insn=0x000000000044F42C string=0x000000000044F448 ""
 *   insn=0x000000000044F434 string=0x000000000044F438 "nyh"
 *   insn=0x000000000044F450 string=0x000000000044F454 "7"
 *   insn=0x000000000044F458 string=0x000000000044F45C "k"
 *   insn=0x000000000044F464 string=0x000000000044F468 "I"
 *   insn=0x000000000044F474 string=0x000000000044F478 "Myh"
 *   insn=0x000000000044F480 string=0x000000000044F484 "."
 *   insn=0x000000000044F480 string=0x000000000044F4B8 ""
 *   insn=0x000000000044F484 string=0x000000000044F488 "?"
 *   insn=0x000000000044F494 string=0x000000000044F498 "."
 *   insn=0x000000000044F498 string=0x000000000044F49C "n"
 *   insn=0x000000000044F4C4 string=0x000000000044F4CC "`"
 *   insn=0x000000000044F4DC string=0x000000000044F4E0 "Z"
 *   insn=0x000000000044F4E8 string=0x000000000044F4EC "h{v"
 *   insn=0x000000000044F4EC string=0x000000000044F4F0 "\t"
 *   insn=0x000000000044F4F4 string=0x000000000044F4F8 "i"
 *   insn=0x000000000044F4FC string=0x000000000044F500 ")"
 *   insn=0x000000000044F500 string=0x000000000044F504 "K\t@"
 *   insn=0x000000000044F504 string=0x000000000044F508 " "
 *   insn=0x000000000044F508 string=0x000000000044F50C "@\t"
 *   insn=0x000000000044F510 string=0x000000000044F514 "\n\t@"
 *   insn=0x000000000044F518 string=0x000000000044F51C "B}\t"
 *   insn=0x000000000044F528 string=0x000000000044F52C ""
 *   insn=0x000000000044F534 string=0x000000000044F538 " "
 *   insn=0x000000000044F538 string=0x000000000044F53C "8@"
 *   insn=0x000000000044F550 string=0x000000000044F554 "\t"
 *   insn=0x000000000044F554 string=0x000000000044F558 "?\t"
 *   insn=0x000000000044F55C string=0x000000000044F560 "\t"
 *   insn=0x000000000044F564 string=0x000000000044F568 "?"
 *   insn=0x000000000044F570 string=0x000000000044F574 "I"
 *   insn=0x000000000044F588 string=0x000000000044F58C "Z"
 *   insn=0x000000000044F58C string=0x000000000044F590 "\t@"
 *   insn=0x000000000044F5A0 string=0x00000000001F9480 "0'"
 *   insn=0x000000000044F5A8 string=0x000000000044F5AC "v"
 *   insn=0x000000000044F5B0 string=0x000000000044F5B4 "_"
 *   insn=0x000000000044F5B4 string=0x000000000044F5B8 "c"
 *   insn=0x000000000044F5C4 string=0x000000000044F5C8 "+"
 *   insn=0x000000000044F5C8 string=0x000000000044F5CC "(c"
 *   insn=0x000000000044F5CC string=0x000000000044F5D0 "\t"
 *   insn=0x000000000044F5D4 string=0x000000000044F5D8 "\n"
 *   insn=0x000000000044F5D8 string=0x000000000044F5DC "}"
 *   insn=0x000000000044F5E0 string=0x000000000044F5E4 "@"
 *   insn=0x000000000044F5E8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000044F5EC string=0x000000000044F5F0 "+"
 *   insn=0x000000000044F5F0 string=0x000000000044F5F4 "(c"
 *   insn=0x000000000044F5F4 string=0x000000000044F5F8 "}@"
 *   insn=0x000000000044F5FC string=0x000000000044F600 "_"
 *   insn=0x000000000044F600 string=0x000000000044F604 "K"
 *   insn=0x000000000044F604 string=0x000000000044F608 "+"
 *   insn=0x000000000044F608 string=0x000000000044F60C "(c"
 *   insn=0x000000000044F618 string=0x000000000044F61C ""
 *   insn=0x000000000044F61C string=0x000000000044F620 "yv"
 *   insn=0x000000000044F630 string=0x000000000044F634 ""
 *   insn=0x000000000044F644 string=0x000000000044F648 "v"
 *   insn=0x000000000044F64C string=0x000000000044F650 "("
 *   insn=0x000000000044F650 string=0x000000000044F654 "h"
 *   insn=0x000000000044F65C string=0x000000000044F660 "\t"
 *   insn=0x000000000044F660 string=0x000000000044F664 "?"
 *   insn=0x000000000044F664 string=0x000000000044F668 "k"
 *   insn=0x000000000044F668 string=0x000000000044F66C "\nA@"
 *   insn=0x000000000044F66C string=0x000000000044F670 "K"
 *   insn=0x000000000044F670 string=0x000000000044F674 ")"
 *   insn=0x000000000044F678 string=0x000000000044F67C "K"
 *   insn=0x000000000044F67C string=0x000000000044F680 "y@"
 *   insn=0x000000000044F680 string=0x000000000044F684 "J"
 *   insn=0x000000000044F684 string=0x000000000044F688 "A"
 *   insn=0x000000000044F688 string=0x000000000044F68C """
 *   insn=0x000000000044F694 string=0x000000000044F698 "h"
 *   insn=0x000000000044F6A0 string=0x000000000044F6A4 "\t"
 *   insn=0x000000000044F6A4 string=0x000000000044F6A8 "?"
 *   insn=0x000000000044F6A8 string=0x000000000044F6AC "K"
 *   insn=0x000000000044F6AC string=0x000000000044F6B0 "\nA@"
 *   insn=0x000000000044F6B0 string=0x000000000044F6B4 "K"
 *   insn=0x000000000044F6B4 string=0x000000000044F6B8 ")"
 *   insn=0x000000000044F6BC string=0x000000000044F6C0 "K"
 *   insn=0x000000000044F6C0 string=0x000000000044F6C4 "y@"
 *   insn=0x000000000044F6C4 string=0x000000000044F6C8 "J"
 *   insn=0x000000000044F6C8 string=0x000000000044F6CC "A"
 *   insn=0x000000000044F6E0 string=0x000000000044F6E4 "h"
 *   insn=0x000000000044F6E4 string=0x000000000044F6E8 "\t"
 *   insn=0x000000000044F6E8 string=0x000000000044F6EC "?"
 *   insn=0x000000000044F6EC string=0x000000000044F6F0 "+"
 *   insn=0x000000000044F6F0 string=0x000000000044F6F4 "\nA@"
 *   insn=0x000000000044F6F4 string=0x000000000044F6F8 "K"
 *   insn=0x000000000044F6F8 string=0x000000000044F6FC ")"
 *   insn=0x000000000044F700 string=0x000000000044F704 "K"
 *   insn=0x000000000044F704 string=0x000000000044F708 "y@"
 *   insn=0x000000000044F708 string=0x000000000044F70C "J"
 *   insn=0x000000000044F70C string=0x000000000044F710 "A"
 *   insn=0x000000000044F718 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044F74C string=0x000000000044F750 ")=G"
 *   insn=0x000000000044F750 string=0x000000000044F754 "!"
 *   insn=0x000000000044F758 string=0x000000000044F75C "\t"
 *   insn=0x000000000044F758 string=0x000000000044F794 "\t"
 *   insn=0x000000000044F75C string=0x000000000044F760 "*"
 *   insn=0x000000000044F760 string=0x000000000044F764 "\n"
 *   insn=0x000000000044F768 string=0x000000000044F76C ""
 *   insn=0x000000000044F76C string=0x000000000044F7A0 "?"
 *   insn=0x000000000044F770 string=0x000000000044F774 ")=G"
 *   insn=0x000000000044F774 string=0x000000000044F778 "!"
 *   insn=0x000000000044F778 string=0x000000000044F77C "\t"
 *   insn=0x000000000044F77C string=0x000000000044F780 "\t"
 *   insn=0x000000000044F77C string=0x000000000044F7BC "\t"
 *   insn=0x000000000044F780 string=0x000000000044F784 "*"
 *   insn=0x000000000044F784 string=0x000000000044F788 "\n"
 *   insn=0x000000000044F790 string=0x000000000044F7C8 "?"
 *   insn=0x000000000044F794 string=0x000000000044F798 "*"
 *   insn=0x000000000044F798 string=0x000000000044F79C "\n"
 *   insn=0x000000000044F7B4 string=0x000000000044F7B8 "5"
 *   insn=0x000000000044F7BC string=0x000000000044F7C0 "*"
 *   insn=0x000000000044F7C0 string=0x000000000044F7C4 "\n"
 *   insn=0x000000000044F7D4 string=0x000000000044F7D8 "1"
 *   insn=0x000000000044F7DC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044F7E4 string=0x000000000044F7E8 "h"
 *   insn=0x000000000044F7E8 string=0x000000000044F7EC "\t\t@"
 *   insn=0x000000000044F7EC string=0x000000000044F7F0 ")"
 *   insn=0x000000000044F7F0 string=0x000000000044F7F4 "\t\t"
 *   insn=0x000000000044F7F8 string=0x000000000044F7FC "\t"
 *   insn=0x000000000044F7FC string=0x000000000044F800 ")"
 *   insn=0x000000000044F804 string=0x000000000044F808 " "
 *   insn=0x000000000044F808 string=0x000000000044F80C """
 *   insn=0x000000000044F824 string=0x000000000044F828 "J"
 *   insn=0x000000000044F82C string=0x000000000044F830 "(a"
 *   insn=0x000000000044F83C string=0x000000000044F840 "J=G"
 *   insn=0x000000000044F840 string=0x000000000044F844 ")!"
 *   insn=0x000000000044F848 string=0x000000000044F84C "*"
 *   insn=0x000000000044F848 string=0x000000000044F860 "*"
 *   insn=0x000000000044F84C string=0x000000000044F850 "K"
 *   insn=0x000000000044F850 string=0x000000000044F854 "+"
 *   insn=0x000000000044F85C string=0x000000000044F86C "_"
 *   insn=0x000000000044F860 string=0x000000000044F864 "K"
 *   insn=0x000000000044F864 string=0x000000000044F868 "+"
 *   insn=0x000000000044F86C string=0x000000000044F870 ","
 *   insn=0x000000000044F898 string=0x000000000044F89C ")"
 *   insn=0x000000000044F8A8 string=0x000000000044F928 "s"
 *   insn=0x000000000044F8AC string=0x000000000044F8B0 ")=G"
 *   insn=0x000000000044F8B0 string=0x000000000044F8B4 "!"
 *   insn=0x000000000044F8B8 string=0x000000000044F8BC "\t"
 *   insn=0x000000000044F8B8 string=0x000000000044F8E8 "\t"
 *   insn=0x000000000044F8BC string=0x000000000044F8C0 "*"
 *   insn=0x000000000044F8C0 string=0x000000000044F8C4 "\n"
 *   insn=0x000000000044F8C8 string=0x000000000044F8CC "?"
 *   insn=0x000000000044F8D8 string=0x000000000044F8DC "s"
 *   insn=0x000000000044F8E0 string=0x000000000044F8E4 "'"
 *   insn=0x000000000044F8E0 string=0x000000000044F940 "h"
 *   insn=0x000000000044F8E8 string=0x000000000044F8EC "*"
 *   insn=0x000000000044F8EC string=0x000000000044F8F0 "\n"
 *   insn=0x000000000044F8F0 string=0x000000000044F8F4 "?"
 *   insn=0x000000000044F8F8 string=0x000000000044F8FC ""
 *   insn=0x000000000044F904 string=0x000000000044F908 "j"
 *   insn=0x000000000044F908 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044F910 string=0x000000000044F914 ""
 *   insn=0x000000000044F934 string=0x000000000044F938 "s"
 *   insn=0x000000000044F938 string=0x000000000044F93C "3"
 *   insn=0x000000000044F940 string=0x000000000044F944 ""
 *   insn=0x000000000044F944 string=0x000000000044F948 "h"
 *   insn=0x000000000044F94C string=0x000000000044F950 "h"
 *   insn=0x000000000044F950 string=0x000000000044F954 "\t@"
 *   insn=0x000000000044F95C string=0x000000000044F960 "h\n@"
 *   insn=0x000000000044F960 string=0x000000000044F964 ""
 *   insn=0x000000000044F964 string=0x000000000044F968 "h\n"
 *   insn=0x000000000044F96C string=0x000000000044F970 "h"
 *   insn=0x000000000044F970 string=0x000000000044F974 "@"
 *   insn=0x000000000044F984 string=0x000000000044F988 "q"
 *   insn=0x000000000044F98C string=0x000000000044F990 "P"
 *   insn=0x000000000044F990 string=0x00000000001F72D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::PODLoader::CreateMesh(Caver::PODLoader *this@<X0>, int a2@<W1>, Caver::Mesh **a3@<X8>)
{
  Caver::Mesh *v6; // x22
  __int64 v7; // x8
  Caver::Mesh *v8; // x11
  __int64 v9; // x24
  int *v10; // x9
  __int64 v11; // x25
  _QWORD *v12; // x21
  __int64 v13; // x8
  int v14; // w10
  Caver::Mesh *v15; // x10
  Caver::Mesh *v16; // x10
  __int64 v17; // x8
  void *v18; // x0
  _DWORD *v19; // x0
  Caver::Mesh *v20; // x9
  _DWORD *v21; // x8
  int v22; // w9
  int v23; // w8
  void *v24; // x0
  __int64 v25; // x26
  const void **v26; // x26
  __int64 v27; // t1
  int v28; // w22
  __int64 v29; // x27
  int v30; // w8
  int v31; // w8
  Caver::Mesh *v32; // x8
  Caver::Mesh *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x22
  unsigned int *v36; // x22
  int v37; // t1
  unsigned __int64 v38; // x26
  int v39; // w9
  Caver::Mesh *v40; // x8
  _DWORD *v41; // x1
  Caver::Mesh *v42; // x0
  __int64 v43; // x8
  Caver::Mesh *v44; // x8
  __int64 v45; // x9
  unsigned __int64 v46; // x10
  unsigned __int64 v47; // x11
  __int64 v48; // x22
  __int64 v49; // x12
  __int64 v50; // x13
  signed __int64 v51; // x12
  int64x2_t v52; // q1
  int64x2_t v53; // q2
  int64x2_t v54; // q0
  int64x2_t *v55; // x15
  int64x2_t *v56; // x16
  int64x2_t v57; // q3
  int64x2_t v58; // q4
  unsigned __int64 v59; // x17
  int64x2_t v60; // q5
  int64x2_t v61; // q7
  unsigned __int64 v62; // x10
  unsigned __int64 v63; // x11
  __int64 v64; // x15
  __int64 v65; // x12
  __int64 v66; // x11
  __int64 v67; // x13
  int v68; // w26
  __int64 v69; // x8
  _DWORD *v70; // x13
  int v71; // w14
  int v72; // w15
  int v73; // w15
  _QWORD *v74; // x13
  _DWORD *v75; // x16
  __int64 v76; // x27
  const void **v77; // x27
  __int64 v78; // t1
  int v79; // w21
  __int64 v80; // x8
  __int64 v81; // x12
  __int64 v82; // x8
  int v83; // w1
  __int64 v84; // x13
  int v85; // w14
  signed int v86; // w14
  __int64 v87; // x22
  __int64 v88; // x8
  __int64 v89; // x10
  void *v90; // x0
  Caver::Mesh *v91; // x22
  Caver::Texture *v92; // x0
  __int64 v93; // x8
  const Caver::Vector2 *v94; // x21
  unsigned __int64 i; // x26
  unsigned __int64 v96; // x8
  unsigned __int64 v97; // x0
  _DWORD *v98; // x21
  __int64 v99; // x26
  __int64 v100; // x22
  _QWORD *v101; // x24
  int v102; // w0
  Caver::Mesh *v103; // x8
  int v104; // w9
  _BYTE *v105; // x10
  int v106; // w0
  Caver::Mesh *v107; // x8
  int v108; // w9
  _WORD *v109; // x10
  Caver::Mesh *v110; // x8
  int v111; // w9
  int *v112; // x10
  unsigned int *v113; // x8
  int v114; // w9
  unsigned int *v115; // x8
  int v116; // w9
  __int64 v117; // [xsp+0h] [xbp-D0h] BYREF
  _QWORD v118[5]; // [xsp+8h] [xbp-C8h]
  __int64 v119; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v120[5]; // [xsp+40h] [xbp-90h] BYREF
  _QWORD v121[3]; // [xsp+68h] [xbp-68h] BYREF

  v121[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (Caver::Mesh *)operator new(0x160u);
  Caver::Mesh::Mesh(v6);
  *a3 = v6;
  boost::detail::shared_count::shared_count<Caver::Mesh>();
  boost::detail::sp_enable_shared_from_this();
  v7 = *(_QWORD *)this;
  v8 = *a3;
  v9 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  v10 = (int *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 96LL * a2);
  v11 = *v10;
  v12 = (_QWORD *)(v9 + 344 * v11);
  *(_QWORD *)v8 = *v12;
  v13 = *(_QWORD *)(v7 + 112) + 176LL * v10[4];
  v14 = *(_DWORD *)(v13 + 60);
  *((_QWORD *)v8 + 20) = *(_QWORD *)(v13 + 52);
  *((_DWORD *)v8 + 42) = v14;
  *((_DWORD *)v8 + 43) = 1065353216;
  v15 = *a3;
  LODWORD(v8) = *(_DWORD *)(v13 + 72);
  *((_QWORD *)v15 + 22) = *(_QWORD *)(v13 + 64);
  *((_DWORD *)v15 + 46) = (_DWORD)v8;
  *((_DWORD *)v15 + 47) = 1065353216;
  v16 = *a3;
  LODWORD(v8) = *(_DWORD *)(v13 + 84);
  *((_QWORD *)v16 + 24) = *(_QWORD *)(v13 + 76);
  *((_DWORD *)v16 + 50) = (_DWORD)v8;
  *((_DWORD *)v16 + 51) = 1065353216;
  *((_DWORD *)*a3 + 52) = *(_DWORD *)(v13 + 88);
  v17 = *(int *)(v13 + 8);
  if ( (v17 & 0x80000000) != 0 )
    goto LABEL_13;
  sub_566BB8((int)v120, *(char **)(*(_QWORD *)(*(_QWORD *)this + 96LL) + 8 * v17));
  Caver::StringByRemovingPathExtension();
  sub_56A6A8((char *)*a3 + 224);
  v18 = (void *)(v118[0] - 24LL);
  if ( (__int64 *)(v118[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v113 = (unsigned int *)(v118[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v114 = __ldaxr(v113);
    while ( __stlxr(v114 - 1, v113) );
  }
  else
  {
    v114 = (*v113)--;
  }
  if ( v114 > 0 )
  {
LABEL_3:
    if ( !*((_BYTE *)this + 176) )
      goto LABEL_12;
  }
  else
  {
    operator delete(v18);
    if ( !*((_BYTE *)this + 176) )
      goto LABEL_12;
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v18);
  Caver::TextureLibrary::TextureForName();
  v19 = (_DWORD *)v118[0];
  v20 = *a3;
  if ( v118[0] )
    ++*(_DWORD *)(v118[0] + 8LL);
  v21 = (_DWORD *)*((_QWORD *)v20 + 27);
  *((_QWORD *)v20 + 27) = v19;
  if ( v21 && (v22 = v21[2] - 1, (v21[2] = v22) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
    v19 = (_DWORD *)v118[0];
    if ( v118[0] )
    {
LABEL_9:
      v23 = v19[2] - 1;
      v19[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  else if ( v19 )
  {
    goto LABEL_9;
  }
LABEL_12:
  v24 = (void *)(v120[0] - 24LL);
  if ( (__int64 *)(v120[0] - 24LL) != &qword_6FD2E0 )
  {
    v115 = (unsigned int *)(v120[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v116 = __ldaxr(v115);
      while ( __stlxr(v116 - 1, v115) );
    }
    else
    {
      v116 = (*v115)--;
    }
    if ( v116 <= 0 )
      operator delete(v24);
  }
LABEL_13:
  v25 = v9 + 344 * v11;
  v27 = *(_QWORD *)(v25 + 32);
  v26 = (const void **)(v25 + 32);
  if ( v27 )
  {
    v28 = PVRTModelPODCountIndices();
    v29 = v9 + 344 * v11;
    Caver::Mesh::AllocIndexBuffer(*a3, *(_DWORD *)(v29 + 24) * v28);
    memcpy(*((void **)*a3 + 36), *v26, (unsigned int)(*(_DWORD *)(v29 + 24) * v28));
    v30 = *(_DWORD *)(v29 + 16) - 1;
    if ( (unsigned int)v30 > 0xC )
      v31 = 0;
    else
      v31 = dword_595430[v30];
    v33 = *a3;
    *((_DWORD *)v33 + 2) = v31;
    v34 = *((_QWORD *)v33 + 36);
    *(_QWORD *)((char *)v33 + 12) = *(_QWORD *)(v9 + 344 * v11 + 20);
    *((_QWORD *)v33 + 3) = v34;
  }
  else
  {
    v32 = *a3;
    *((_QWORD *)v32 + 1) = 0;
    *((_QWORD *)v32 + 2) = 0;
    *((_QWORD *)v32 + 3) = 0;
  }
  v35 = v9 + 344 * v11;
  v37 = *(_DWORD *)(v35 + 48);
  v36 = (unsigned int *)(v35 + 48);
  if ( v37 )
  {
    v38 = 0;
    do
    {
      v39 = *(_DWORD *)(*(_QWORD *)(v9 + 344 * v11 + 40) + 4 * v38);
      v40 = *a3;
      LODWORD(v120[0]) = v39;
      v41 = (_DWORD *)*((_QWORD *)v40 + 38);
      if ( v41 == *((_DWORD **)v40 + 39) )
      {
        std::vector<int>::_M_insert_aux((_DWORD)v40 + 296, v41);
      }
      else
      {
        *v41 = v39;
        *((_QWORD *)v40 + 38) = v41 + 1;
      }
      ++v38;
    }
    while ( v38 < *v36 );
  }
  v42 = *a3;
  v43 = v9 + 344 * v11;
  v120[0] = v43 + 56;
  v120[1] = v43 + 80;
  v118[0] = (char *)v42 + 32;
  v118[1] = (char *)v42 + 56;
  Caver::Mesh::SetNumTexCoordSets(v42, *(_DWORD *)(v43 + 8));
  v44 = *a3;
  v45 = *((int *)*a3 + 80);
  if ( (int)v45 < 1 )
  {
    LODWORD(v48) = 2;
    goto LABEL_38;
  }
  v46 = *(_QWORD *)(v9 + 344 * v11 + 152);
  v120[2] = v46;
  v47 = *((_QWORD *)v44 + 10);
  v118[2] = v47;
  if ( (_DWORD)v45 == 1 )
  {
    LODWORD(v48) = 3;
    goto LABEL_38;
  }
  v49 = 2;
  if ( v45 > 2 )
    v49 = v45;
  v50 = v49 - 1;
  if ( (unsigned __int64)(v49 - 1) <= 3 )
  {
    v51 = 1;
    v48 = 3;
LABEL_36:
    v62 = v46 + 24 * v51;
    v63 = v47 + 24 * v51;
    do
    {
      v64 = v48;
      ++v51;
      ++v48;
      v120[v64] = v62;
      v118[v64] = v63;
      v62 += 24LL;
      v63 += 24LL;
    }
    while ( v51 < v45 );
    goto LABEL_38;
  }
  v52 = (int64x2_t)xmmword_594F40;
  v53 = vdupq_n_s64(0x30u);
  v48 = v50 | 3;
  v54 = vdupq_n_s64(v46);
  v51 = v50 & 0xFFFFFFFFFFFFFFFCLL | 1;
  v55 = (int64x2_t *)v121;
  v56 = (int64x2_t *)&v119;
  v57 = vdupq_n_s64(v47);
  v58 = vdupq_n_s64(4u);
  v59 = v50 & 0xFFFFFFFFFFFFFFFCLL;
  do
  {
    v60.n128_u64[0] = 24 * v52.n128_u64[0];
    v60.n128_u64[1] = 24 * v52.n128_u64[1];
    v61 = vaddq_s64(v60, v53);
    v55[-1] = vaddq_s64(v54, v60);
    *v55 = vaddq_s64(v54, v61);
    v52 = vaddq_s64(v52, v58);
    v59 -= 4LL;
    v56[-1] = vaddq_s64(v57, v60);
    *v56 = vaddq_s64(v57, v61);
    v55 += 2;
    v56 += 2;
  }
  while ( v59 );
  if ( v50 != (v50 & 0xFFFFFFFFFFFFFFFCLL) )
    goto LABEL_36;
LABEL_38:
  v65 = (int)v48;
  v66 = v9 + 344 * v11;
  v118[v65] = (char *)v44 + 88;
  v120[v65] = v66 + 160;
  v67 = v65 * 8 + 8;
  v65 += 2;
  *(_QWORD *)((char *)v118 + v67) = (char *)v44 + 112;
  v68 = v48 + 3;
  v118[v65] = (char *)v44 + 136;
  *(_QWORD *)((char *)v120 + v67) = v66 + 184;
  v120[v65] = v66 + 208;
  if ( (int)v48 >= -2 )
  {
    v69 = 0;
    do
    {
      v70 = (_DWORD *)v120[v69];
      v71 = v70[1];
      if ( v71 )
      {
        v72 = *v70 - 1;
        if ( (unsigned int)v72 > 0xC )
          v73 = 0;
        else
          v73 = dword_595430[v72];
        v75 = (_DWORD *)v118[v69];
        *v75 = v73;
        v75[1] = v71;
        v75[2] = v70[2];
      }
      else
      {
        v74 = (_QWORD *)v118[v69];
        *v74 = 0;
        v74[1] = 0;
        v74[2] = 0;
      }
      ++v69;
    }
    while ( v69 < v68 );
  }
  v76 = v9 + 344 * v11;
  v78 = *(_QWORD *)(v76 + 232);
  v77 = (const void **)(v76 + 232);
  if ( v78 )
  {
    v79 = *(_DWORD *)(v9 + 344 * v11 + 64) * *(_DWORD *)v12;
    Caver::Mesh::AllocVertexBuffer(*a3, v79);
    memcpy(*((void **)*a3 + 34), *v77, v79);
    if ( (int)v48 >= -2 )
    {
      v80 = 0;
      do
      {
        v81 = v120[v80];
        if ( *(_DWORD *)(v81 + 4) )
          *(_QWORD *)(v118[v80] + 16LL) = *((_QWORD *)*a3 + 34) + *(_QWORD *)(v81 + 16);
        ++v80;
      }
      while ( v80 < v68 );
    }
  }
  else
  {
    if ( (int)v48 < -2 )
    {
      v83 = 0;
    }
    else
    {
      v82 = 0;
      v83 = 0;
      do
      {
        v84 = v120[v82];
        if ( *(_DWORD *)(v84 + 4) )
        {
          v85 = v83 + 3;
          if ( v83 >= 0 )
            v85 = v83;
          v86 = (v85 & 0xFFFFFFFC) + 4;
          *(_QWORD *)(v118[v82] + 16LL) = v86;
          v83 = v86 + *(_DWORD *)(v84 + 8) * *(_DWORD *)v12;
        }
        ++v82;
      }
      while ( v82 < v68 );
    }
    Caver::Mesh::AllocVertexBuffer(*a3, v83);
    if ( (int)v48 >= -2 )
    {
      v87 = 0;
      do
      {
        v88 = v120[v87];
        if ( *(_DWORD *)(v88 + 4) )
        {
          v89 = v118[v87];
          v90 = (void *)(*((_QWORD *)*a3 + 34) + *(_QWORD *)(v89 + 16));
          *(_QWORD *)(v89 + 16) = v90;
          memcpy(v90, *(const void **)(v88 + 16), (unsigned int)(*(_DWORD *)(v88 + 8) * *(_DWORD *)v12));
        }
        ++v87;
      }
      while ( v87 < v68 );
    }
  }
  v91 = *a3;
  v92 = (Caver::Texture *)*((_QWORD *)*a3 + 27);
  if ( v92 )
  {
    if ( *((_QWORD *)v92 + 14) )
    {
      if ( *((int *)v91 + 80) >= 1 )
      {
        v93 = *((_QWORD *)v91 + 10);
        if ( *(_DWORD *)(v93 + 4) == 2 && *(_DWORD *)v93 == 5126 && *(_DWORD *)v91 )
        {
          v94 = *(const Caver::Vector2 **)(v93 + 16);
          for ( i = 1; ; ++i )
          {
            Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(&v117, v92, v94);
            *(_QWORD *)v94 = v117;
            v91 = *a3;
            if ( i >= *(int *)*a3 )
              break;
            v92 = (Caver::Texture *)*((_QWORD *)v91 + 27);
            v94 = (const Caver::Vector2 *)((char *)v94 + *(unsigned int *)(*((_QWORD *)v91 + 10) + 8LL));
          }
        }
      }
    }
  }
  if ( *((int *)v91 + 29) >= 1 )
  {
    v96 = *(int *)(v9 + 344 * v11 + 264);
    if ( is_mul_ok(v96, 4u) )
      v97 = 4 * v96;
    else
      v97 = -1;
    v98 = (_DWORD *)operator new[](v97);
    v99 = **(int **)(v9 + 344 * v11 + 248);
    if ( (int)v99 >= 1 )
    {
      v100 = 0;
      v101 = (_QWORD *)(v9 + 344 * v11 + 240);
      do
      {
        LODWORD(v117) = *(_DWORD *)(*v101 + 4 * v100);
        v98[v100++] = *(_DWORD *)std::map<int,int>::operator[]();
      }
      while ( v100 < v99 );
      v91 = *a3;
    }
    v102 = Caver::MeshData::valueSize((Caver::Mesh *)((char *)v91 + 112));
    v103 = *a3;
    if ( v102 == 1 )
    {
      v104 = *(_DWORD *)v103;
      if ( *(int *)v103 >= 1 )
      {
        v105 = (_BYTE *)*((_QWORD *)v103 + 16);
        do
        {
          --v104;
          *v105 = v98[(unsigned __int8)*v105];
          v105 += *((unsigned int *)v103 + 30);
        }
        while ( v104 );
      }
    }
    else
    {
      v106 = Caver::MeshData::valueSize((Caver::Mesh *)((char *)v103 + 112));
      v107 = *a3;
      if ( v106 == 2 )
      {
        v108 = *(_DWORD *)v107;
        if ( *(int *)v107 >= 1 )
        {
          v109 = (_WORD *)*((_QWORD *)v107 + 16);
          do
          {
            --v108;
            *v109 = v98[(unsigned __int16)*v109];
            v109 = (_WORD *)((char *)v109 + *((unsigned int *)v107 + 30));
          }
          while ( v108 );
        }
      }
      else if ( (unsigned int)Caver::MeshData::valueSize((Caver::Mesh *)((char *)v107 + 112)) == 4 )
      {
        v110 = *a3;
        v111 = *(_DWORD *)*a3;
        if ( v111 >= 1 )
        {
          v112 = (int *)*((_QWORD *)v110 + 16);
          do
          {
            --v111;
            *v112 = v98[*v112];
            v112 = (int *)((char *)v112 + *((unsigned int *)v110 + 30));
          }
          while ( v111 );
        }
      }
    }
    operator delete[](v98);
  }
}

