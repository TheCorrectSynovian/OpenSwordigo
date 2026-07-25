/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044604C
 * Mangled: _ZN5Caver11MeshBuilder12InitWithMeshERKNS_4MeshEb
 * Demangled: Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Callers: 1
 *   0x0000000000202C80  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Callees: 11
 *   0x00000000001F57C0  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC5E0  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *   0x00000000001FF070  Caver::Mesh::SetNumTexCoordSets(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 242
 *   insn=0x0000000000446060 string=0x0000000000446064 "W"
 *   insn=0x0000000000446078 string=0x000000000044607C "`*"
 *   insn=0x0000000000446080 string=0x0000000000446084 "`."
 *   insn=0x0000000000446088 string=0x000000000044608C "`2"
 *   insn=0x0000000000446090 string=0x0000000000446094 "h"
 *   insn=0x0000000000446098 string=0x000000000044609C "hn@"
 *   insn=0x00000000004460A4 string=0x00000000004460A8 "\t\t@"
 *   insn=0x00000000004460A8 string=0x00000000004460AC ")"
 *   insn=0x00000000004460AC string=0x00000000004460B0 "\t\t"
 *   insn=0x00000000004460B8 string=0x00000000004460BC "a"
 *   insn=0x00000000004460CC string=0x00000000004460D0 ""
 *   insn=0x00000000004460F0 string=0x00000000004460F4 "\t\t@"
 *   insn=0x00000000004460F4 string=0x00000000004460F8 ")"
 *   insn=0x00000000004460F8 string=0x00000000004460FC "\t\t"
 *   insn=0x0000000000446100 string=0x0000000000446104 "o"
 *   insn=0x0000000000446108 string=0x000000000044610C "@"
 *   insn=0x000000000044610C string=0x0000000000446110 ""
 *   insn=0x0000000000446110 string=0x0000000000446114 ""
 *   insn=0x0000000000446118 string=0x000000000044611C ""
 *   insn=0x000000000044611C string=0x0000000000446120 ""
 *   insn=0x000000000044612C string=0x0000000000446130 "^"
 *   insn=0x0000000000446138 string=0x000000000044613C ")"
 *   insn=0x0000000000446150 string=0x0000000000446154 "@"
 *   insn=0x0000000000446150 string=0x0000000000446170 "h&@"
 *   insn=0x0000000000446154 string=0x0000000000446158 ""
 *   insn=0x0000000000446158 string=0x000000000044615C ""
 *   insn=0x0000000000446160 string=0x0000000000446164 ""
 *   insn=0x0000000000446164 string=0x0000000000446168 ""
 *   insn=0x0000000000446178 string=0x000000000044617C "i"@"
 *   insn=0x0000000000446178 string=0x0000000000446190 "h>@"
 *   insn=0x0000000000446180 string=0x0000000000446184 "I!"
 *   insn=0x0000000000446184 string=0x0000000000446188 "_)"
 *   insn=0x0000000000446188 string=0x000000000044618C "_"
 *   insn=0x0000000000446198 string=0x000000000044619C "i:@"
 *   insn=0x0000000000446198 string=0x00000000004461B0 "h^@"
 *   insn=0x00000000004461A0 string=0x00000000004461A4 "I!)_A"
 *   insn=0x00000000004461A4 string=0x00000000004461A8 "_A"
 *   insn=0x00000000004461A8 string=0x00000000004461AC "_%"
 *   insn=0x00000000004461B8 string=0x00000000004461BC "iZ@"
 *   insn=0x00000000004461B8 string=0x00000000004461D0 "aBA"
 *   insn=0x00000000004461C0 string=0x00000000004461C4 "I!)_a"
 *   insn=0x00000000004461C4 string=0x00000000004461C8 "_a"
 *   insn=0x00000000004461C8 string=0x00000000004461CC "_5"
 *   insn=0x00000000004461D0 string=0x00000000004461D4 "?"
 *   insn=0x00000000004461D8 string=0x000000000044622C "h"
 *   insn=0x00000000004461E0 string=0x00000000004461E4 "hBA"
 *   insn=0x00000000004461E8 string=0x00000000004461EC ""
 *   insn=0x00000000004461F8 string=0x00000000004461FC "k*@"
 *   insn=0x00000000004461FC string=0x0000000000446200 ")"
 *   insn=0x0000000000446200 string=0x0000000000446204 "J)@"
 *   insn=0x0000000000446204 string=0x0000000000446208 "kih"
 *   insn=0x0000000000446208 string=0x000000000044620C "J"
 *   insn=0x000000000044620C string=0x0000000000446210 "K"
 *   insn=0x0000000000446210 string=0x0000000000446214 "_\t"
 *   insn=0x0000000000446214 string=0x0000000000446218 "_\t"
 *   insn=0x0000000000446218 string=0x000000000044621C "jB"
 *   insn=0x000000000044621C string=0x0000000000446220 "a"
 *   insn=0x0000000000446220 string=0x0000000000446224 "?"
 *   insn=0x0000000000446230 string=0x0000000000446234 ""
 *   insn=0x0000000000446234 string=0x0000000000446238 "\n\n"
 *   insn=0x0000000000446238 string=0x000000000044623C "h\n@"
 *   insn=0x0000000000446240 string=0x0000000000446244 "@"
 *   insn=0x0000000000446244 string=0x0000000000446248 "(\t"
 *   insn=0x0000000000446248 string=0x000000000044624C " "
 *   insn=0x000000000044624C string=0x0000000000446250 "?"
 *   insn=0x0000000000446254 string=0x0000000000446258 "h"
 *   insn=0x0000000000446268 string=0x000000000044626C "v"
 *   insn=0x0000000000446270 string=0x0000000000446274 "s"
 *   insn=0x0000000000446274 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000446288 string=0x000000000044628C ")"
 *   insn=0x000000000044628C string=0x0000000000446290 ")"
 *   insn=0x0000000000446290 string=0x0000000000446294 ")}\n"
 *   insn=0x0000000000446294 string=0x0000000000446298 "?"
 *   insn=0x00000000004462AC string=0x00000000001FC5E0 "0'"
 *   insn=0x00000000004462B0 string=0x00000000004462C4 "h&"
 *   insn=0x00000000004462CC string=0x000000000044639C "h>"
 *   insn=0x00000000004462D0 string=0x00000000004462D4 "?"
 *   insn=0x00000000004462D4 string=0x00000000004462D8 "+"
 *   insn=0x00000000004462DC string=0x00000000004462E0 "l"
 *   insn=0x00000000004462E0 string=0x00000000004462E4 "m"@"
 *   insn=0x0000000000446304 string=0x0000000000446384 "`*@"
 *   insn=0x0000000000446308 string=0x000000000044630C "b"
 *   insn=0x000000000044630C string=0x0000000000446318 "@-"
 *   insn=0x000000000044631C string=0x0000000000446320 "?"
 *   insn=0x000000000044632C string=0x0000000000446330 "b"
 *   insn=0x0000000000446334 string=0x0000000000446338 ""
 *   insn=0x0000000000446344 string=0x0000000000446348 "@"
 *   insn=0x0000000000446348 string=0x000000000044634C "B"
 *   insn=0x000000000044634C string=0x0000000000446350 "! "
 *   insn=0x0000000000446354 string=0x0000000000446358 "@"
 *   insn=0x0000000000446358 string=0x000000000044635C "A"
 *   insn=0x0000000000446378 string=0x000000000044637C "Bj!"
 *   insn=0x000000000044637C string=0x0000000000446380 "a"
 *   insn=0x0000000000446384 string=0x0000000000446388 "J"
 *   insn=0x0000000000446388 string=0x000000000044638C "_"
 *   insn=0x000000000044638C string=0x0000000000446390 "R"
 *   insn=0x0000000000446394 string=0x0000000000446398 "A"
 *   insn=0x00000000004463A4 string=0x0000000000446480 "j^@"
 *   insn=0x00000000004463A8 string=0x00000000004463AC "?"
 *   insn=0x00000000004463B4 string=0x00000000004463B8 "l&@"
 *   insn=0x00000000004463B8 string=0x00000000004463BC "m:@"
 *   insn=0x00000000004463CC string=0x00000000004463D0 "qA"
 *   insn=0x00000000004463D0 string=0x00000000004463D4 "r"
 *   insn=0x00000000004463DC string=0x00000000004463E0 "!"
 *   insn=0x00000000004463E0 string=0x0000000000446464 "aB@"
 *   insn=0x00000000004463E4 string=0x00000000004463E8 "b"
 *   insn=0x00000000004463E8 string=0x00000000004463F4 "A-"
 *   insn=0x00000000004463F0 string=0x000000000044644C """
 *   insn=0x00000000004463F4 string=0x00000000004463F8 "!@"
 *   insn=0x00000000004463FC string=0x0000000000446400 "_"
 *   insn=0x0000000000446404 string=0x0000000000446408 "!"
 *   insn=0x000000000044640C string=0x0000000000446410 "b"
 *   insn=0x0000000000446414 string=0x0000000000446418 ""
 *   insn=0x0000000000446424 string=0x0000000000446428 " "
 *   insn=0x0000000000446428 string=0x000000000044642C "!"
 *   insn=0x000000000044642C string=0x0000000000446430 "B "
 *   insn=0x0000000000446430 string=0x0000000000446434 "`"
 *   insn=0x0000000000446434 string=0x0000000000446438 "c"
 *   insn=0x0000000000446438 string=0x000000000044643C "a"
 *   insn=0x0000000000446450 string=0x0000000000446454 "!"
 *   insn=0x0000000000446458 string=0x000000000044645C "#j""
 *   insn=0x000000000044645C string=0x0000000000446460 "a"
 *   insn=0x0000000000446464 string=0x0000000000446468 "J"
 *   insn=0x0000000000446468 string=0x000000000044646C "1"
 *   insn=0x000000000044646C string=0x0000000000446470 "_"
 *   insn=0x0000000000446474 string=0x0000000000446478 "R"
 *   insn=0x0000000000446480 string=0x0000000000446484 "_"
 *   insn=0x0000000000446484 string=0x0000000000446488 "k"
 *   insn=0x0000000000446488 string=0x00000000004464F4 "hB"
 *   insn=0x0000000000446490 string=0x0000000000446494 ""
 *   insn=0x0000000000446498 string=0x000000000044649C "k6@"
 *   insn=0x00000000004464A0 string=0x00000000004464A4 "-"
 *   insn=0x00000000004464A8 string=0x00000000004464AC "nZ@"
 *   insn=0x00000000004464B0 string=0x00000000004464B4 "A"
 *   insn=0x00000000004464B4 string=0x00000000004464B8 "_"
 *   insn=0x00000000004464B4 string=0x00000000004464DC "nb@"
 *   insn=0x00000000004464B8 string=0x00000000004464BC ""
 *   insn=0x00000000004464C0 string=0x00000000004464C4 "jin8"
 *   insn=0x00000000004464C8 string=0x00000000004464CC "j^"
 *   insn=0x00000000004464D4 string=0x00000000004464D8 "k"
 *   insn=0x00000000004464DC string=0x00000000004464E0 ")"
 *   insn=0x00000000004464E0 string=0x00000000004464E4 "?"
 *   insn=0x00000000004464E8 string=0x00000000004464EC "k"
 *   insn=0x00000000004464F8 string=0x00000000004464FC "K"
 *   insn=0x00000000004464FC string=0x0000000000446500 "j*@"
 *   insn=0x00000000004464FC string=0x0000000000446604 "h"
 *   insn=0x000000000044651C string=0x00000000004465F8 ")"
 *   insn=0x0000000000446524 string=0x0000000000446528 "")"
 *   insn=0x0000000000446528 string=0x000000000044652C "Q@"
 *   insn=0x000000000044652C string=0x0000000000446530 "R"
 *   insn=0x0000000000446530 string=0x0000000000446534 "@"
 *   insn=0x000000000044653C string=0x0000000000446540 "!"
 *   insn=0x0000000000446548 string=0x000000000044654C "C"
 *   insn=0x0000000000446548 string=0x00000000004465E0 "C"
 *   insn=0x0000000000446550 string=0x0000000000446554 "k"
 *   insn=0x0000000000446558 string=0x000000000044655C "b"
 *   insn=0x0000000000446568 string=0x000000000044656C "d"
 *   insn=0x0000000000446574 string=0x0000000000446578 "&"
 *   insn=0x0000000000446580 string=0x0000000000446598 "d"
 *   insn=0x0000000000446584 string=0x0000000000446588 "?"
 *   insn=0x0000000000446588 string=0x000000000044658C "b"
 *   insn=0x0000000000446590 string=0x0000000000446594 ""
 *   insn=0x00000000004465A0 string=0x00000000004465A4 "'"
 *   insn=0x00000000004465A8 string=0x00000000004465AC "'"
 *   insn=0x00000000004465B8 string=0x00000000004465BC "A"
 *   insn=0x00000000004465C8 string=0x00000000004465CC "&je"
 *   insn=0x00000000004465D4 string=0x00000000004465D8 "&h%"
 *   insn=0x00000000004465D8 string=0x00000000004465DC "a"
 *   insn=0x00000000004465E8 string=0x00000000004465EC "!"
 *   insn=0x00000000004465EC string=0x00000000004465F0 "1"
 *   insn=0x00000000004465F8 string=0x00000000004465FC "?"
 *   insn=0x0000000000446608 string=0x000000000044660C "-"
 *   insn=0x000000000044660C string=0x0000000000446610 "i"
 *   insn=0x0000000000446610 string=0x0000000000446614 "h"
 *   insn=0x0000000000446614 string=0x0000000000446618 "?"
 *   insn=0x000000000044661C string=0x0000000000446620 "I"
 *   insn=0x000000000044661C string=0x0000000000446634 ""
 *   insn=0x0000000000446620 string=0x0000000000446624 ")"
 *   insn=0x0000000000446624 string=0x0000000000446628 ")y"
 *   insn=0x0000000000446628 string=0x000000000044662C "("
 *   insn=0x0000000000446644 string=0x0000000000446648 "\n}@"
 *   insn=0x000000000044664C string=0x0000000000446650 "+"
 *   insn=0x0000000000446650 string=0x0000000000446654 "k"
 *   insn=0x0000000000446658 string=0x000000000044665C """
 *   insn=0x000000000044665C string=0x0000000000446660 "B"
 *   insn=0x000000000044665C string=0x0000000000446680 "i"
 *   insn=0x0000000000446668 string=0x000000000044666C "U"
 *   insn=0x000000000044666C string=0x00000000001F57C0 "P'"
 *   insn=0x0000000000446680 string=0x0000000000446684 ")\t\n"
 *   insn=0x000000000044668C string=0x0000000000446690 ""
 *   insn=0x0000000000446694 string=0x0000000000446698 "k"
 *   insn=0x0000000000446698 string=0x000000000044669C "l\n@"
 *   insn=0x00000000004466A0 string=0x00000000004466A4 "m"
 *   insn=0x00000000004466A8 string=0x00000000004466AC "a"
 *   insn=0x00000000004466AC string=0x00000000004466B0 "n"
 *   insn=0x00000000004466AC string=0x00000000004466D8 "n"
 *   insn=0x00000000004466B4 string=0x00000000004466B8 ""
 *   insn=0x00000000004466BC string=0x00000000004466C0 "oynxOy."
 *   insn=0x00000000004466C0 string=0x00000000004466C4 "Oy."
 *   insn=0x00000000004466C4 string=0x00000000004466C8 "o"
 *   insn=0x00000000004466D0 string=0x00000000004466D4 "k"
 *   insn=0x00000000004466D8 string=0x00000000004466DC ")"
 *   insn=0x00000000004466DC string=0x00000000004466E0 "?"
 *   insn=0x00000000004466E0 string=0x00000000004466E4 "J"
 *   insn=0x00000000004466E4 string=0x00000000004466E8 "k"
 *   insn=0x00000000004466F8 string=0x00000000004466FC "A"
 *   insn=0x0000000000446718 string=0x000000000044671C ")=G"
 *   insn=0x000000000044671C string=0x0000000000446720 "!"
 *   insn=0x0000000000446724 string=0x0000000000446728 "\t"
 *   insn=0x0000000000446724 string=0x000000000044673C "\t"
 *   insn=0x0000000000446728 string=0x000000000044672C "*"
 *   insn=0x000000000044672C string=0x0000000000446730 "\n"
 *   insn=0x0000000000446738 string=0x0000000000446748 "?"
 *   insn=0x000000000044673C string=0x0000000000446740 "*"
 *   insn=0x0000000000446740 string=0x0000000000446744 "\n"
 *   insn=0x0000000000446764 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044676C string=0x0000000000446770 ""
 *   insn=0x0000000000446770 string=0x0000000000446774 "\t\t@"
 *   insn=0x0000000000446774 string=0x0000000000446778 ")"
 *   insn=0x0000000000446778 string=0x000000000044677C "\t\t"
 *   insn=0x0000000000446780 string=0x0000000000446784 "\t"
 *   insn=0x0000000000446784 string=0x0000000000446788 ")"
 *   insn=0x000000000044678C string=0x0000000000446790 " "
 *   insn=0x00000000004467A0 string=0x00000000004467A4 "J"
 *   insn=0x00000000004467A8 string=0x00000000004467AC "(a"
 *   insn=0x00000000004467B8 string=0x00000000004467BC "J=G"
 *   insn=0x00000000004467BC string=0x00000000004467C0 ")!"
 *   insn=0x00000000004467C4 string=0x00000000004467C8 "*"
 *   insn=0x00000000004467C4 string=0x0000000000446818 "*"
 *   insn=0x00000000004467C8 string=0x00000000004467CC "K"
 *   insn=0x00000000004467CC string=0x00000000004467D0 "+"
 *   insn=0x00000000004467D4 string=0x00000000004467D8 "_"
 *   insn=0x00000000004467F0 string=0x00000000004467F4 "@"
 *   insn=0x00000000004467F4 string=0x00000000004467F8 ""
 *   insn=0x00000000004467F8 string=0x00000000004467FC ""
 *   insn=0x0000000000446800 string=0x0000000000446804 ""
 *   insn=0x0000000000446804 string=0x0000000000446808 ""
 *   insn=0x0000000000446810 string=0x0000000000446814 ","
 *   insn=0x0000000000446818 string=0x000000000044681C "K"
 *   insn=0x000000000044681C string=0x0000000000446820 "+"
 *   insn=0x0000000000446820 string=0x0000000000446824 "_"
 *   insn=0x0000000000446830 string=0x0000000000446834 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::InitWithMesh(Caver::Mesh **this, const Caver::Mesh *a2, char a3)
{
  __int64 v6; // x8
  Caver::Mesh *v7; // x24
  _DWORD *v8; // x0
  int v9; // w8
  void *v10; // x0
  __int64 result; // x0
  int v12; // w8
  int v13; // w8
  Caver::Mesh *v14; // x10
  int v15; // w8
  Caver::Mesh *v16; // x10
  int v17; // w8
  Caver::Mesh *v18; // x10
  int v19; // w1
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x10
  Caver::Mesh *v23; // x9
  unsigned __int64 v24; // x22
  Caver::Mesh *v25; // x8
  __int64 *v26; // x21
  unsigned __int64 v27; // x9
  __int64 v28; // x8
  int v29; // w9
  __int64 v30; // x11
  unsigned __int64 v31; // x12
  int v32; // w13
  __int64 v33; // x10
  __int64 v34; // x18
  __int64 v35; // x0
  unsigned __int64 v36; // x0
  __int64 v37; // x0
  unsigned __int64 v38; // x1
  __int128 v39; // q0
  __int128 v40; // q1
  _OWORD *v41; // x2
  __int64 v42; // x1
  int v43; // w2
  __int64 v44; // x8
  int v45; // w9
  __int64 v46; // x11
  unsigned __int64 v47; // x12
  int v48; // w13
  __int64 v49; // x10
  __int64 v50; // x17
  __int64 v51; // x18
  __int64 v52; // x1
  unsigned __int64 v53; // x1
  __int128 *v54; // x1
  unsigned __int64 v55; // x2
  _OWORD *v56; // x3
  __int128 v57; // q0
  __int128 v58; // q1
  __int64 v59; // x2
  int v60; // w3
  __int64 v61; // x10
  int v62; // w8
  __int64 v63; // x11
  int v64; // w9
  __int64 v65; // x12
  __int64 v66; // x14
  __int64 v67; // x8
  __int64 v68; // x10
  int v69; // w11
  __int64 v70; // x9
  __int64 v71; // x16
  int *v72; // x2
  unsigned __int64 v73; // x17
  int *v74; // x18
  unsigned int *v75; // x2
  unsigned int v76; // t1
  __int64 v77; // x15
  __int64 v78; // x1
  __int64 v79; // x3
  __int64 v80; // x4
  unsigned __int64 v81; // x5
  __int64 v82; // x5
  unsigned __int64 v83; // x6
  __int128 v84; // q0
  __int128 v85; // q1
  _OWORD *v86; // x7
  __int64 v87; // x5
  int v88; // w6
  __int64 v89; // x9
  __int64 v90; // x10
  int v91; // w8
  int v92; // w8
  Caver::Mesh *v93; // x9
  Caver::Mesh *v94; // x1
  unsigned __int64 v95; // x11
  Caver::Mesh *v96; // x10
  __int64 v97; // x11
  int v98; // w12
  int i; // w9
  __int64 v100; // x14
  unsigned int *v101; // x8
  int v102; // w9
  __int128 v103; // [xsp+0h] [xbp-D0h]
  __int128 v104; // [xsp+10h] [xbp-C0h]
  __int128 v105; // [xsp+20h] [xbp-B0h]
  int v106; // [xsp+30h] [xbp-A0h]
  __int64 v107; // [xsp+38h] [xbp-98h]
  __int64 v108; // [xsp+40h] [xbp-90h] BYREF
  int v109; // [xsp+48h] [xbp-88h]
  _BYTE v110[72]; // [xsp+50h] [xbp-80h] BYREF
  __int64 v111; // [xsp+98h] [xbp-38h]

  v111 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v103 = *((_OWORD *)a2 + 10);
  v104 = *((_OWORD *)a2 + 11);
  v105 = *((_OWORD *)a2 + 12);
  v106 = *((_DWORD *)a2 + 52);
  v6 = *((_QWORD *)a2 + 27);
  v107 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  sub_56A528(&v108, (char *)a2 + 224);
  v7 = *this;
  *((_DWORD *)v7 + 52) = v106;
  *((_OWORD *)v7 + 12) = v105;
  *((_OWORD *)v7 + 11) = v104;
  *((_OWORD *)v7 + 10) = v103;
  if ( v107 )
    ++*(_DWORD *)(v107 + 8);
  v8 = (_DWORD *)*((_QWORD *)v7 + 27);
  *((_QWORD *)v7 + 27) = v107;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  sub_56A6A8((char *)v7 + 224);
  v10 = (void *)(v108 - 24);
  if ( (__int64 *)(v108 - 24) != &qword_6FD2E0 )
  {
    v101 = (unsigned int *)(v108 - 8);
    if ( &pthread_create )
    {
      do
        v102 = __ldaxr(v101);
      while ( __stlxr(v102 - 1, v101) );
    }
    else
    {
      v102 = (*v101)--;
    }
    if ( v102 <= 0 )
    {
      operator delete(v10);
      result = v107;
      if ( !v107 )
        goto LABEL_12;
LABEL_10:
      v12 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v12;
      if ( !v12 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      goto LABEL_12;
    }
  }
  result = v107;
  if ( v107 )
    goto LABEL_10;
LABEL_12:
  v13 = *((_DWORD *)a2 + 9);
  if ( v13 >= 1 )
  {
    v14 = *this;
    *((_DWORD *)v14 + 8) = *((_DWORD *)a2 + 8);
    *((_DWORD *)v14 + 9) = v13;
    *((_DWORD *)v14 + 10) = 0;
    *((_QWORD *)v14 + 6) = 0;
  }
  v15 = *((_DWORD *)a2 + 15);
  if ( v15 >= 1 )
  {
    v16 = *this;
    *((_DWORD *)v16 + 14) = *((_DWORD *)a2 + 14);
    *((_DWORD *)v16 + 15) = v15;
    *((_DWORD *)v16 + 16) = 0;
    *((_QWORD *)v16 + 9) = 0;
  }
  v17 = *((_DWORD *)a2 + 23);
  if ( v17 >= 1 )
  {
    v18 = *this;
    *((_DWORD *)v18 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v18 + 23) = v17;
    *((_DWORD *)v18 + 24) = 0;
    *((_QWORD *)v18 + 13) = 0;
  }
  v19 = *((_DWORD *)a2 + 80);
  if ( v19 >= 1 )
  {
    result = Caver::Mesh::SetNumTexCoordSets(*this, v19);
    if ( *((int *)a2 + 80) >= 1 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        ++v21;
        v22 = *((_QWORD *)*this + 10) + v20;
        *(_QWORD *)v22 = *(_QWORD *)(*((_QWORD *)a2 + 10) + v20);
        *(_DWORD *)(v22 + 8) = 0;
        *(_QWORD *)(v22 + 16) = 0;
        v20 += 24;
      }
      while ( v21 < *((int *)a2 + 80) );
    }
  }
  if ( *((int *)a2 + 3) >= 1 )
  {
    v23 = *this;
    *((_DWORD *)v23 + 2) = *((_DWORD *)a2 + 2);
    *(_QWORD *)((char *)v23 + 12) = 1;
    *((_QWORD *)v23 + 3) = 0;
  }
  if ( (a3 & 1) != 0 )
  {
    *((_DWORD *)this + 20) = *((_DWORD *)a2 + 1);
    v24 = *(int *)a2;
    *((_DWORD *)this + 4) = v24;
    result = (__int64)memset(v110, 0, 0x44u);
    v26 = (__int64 *)(this + 3);
    v25 = this[3];
    v27 = 0xF0F0F0F0F0F0F0F1LL * ((this[4] - v25) >> 2);
    if ( v27 >= v24 )
    {
      if ( v27 > v24 )
        this[4] = (Caver::Mesh *)((char *)v25 + 68 * v24);
    }
    else
    {
      result = std::vector<Caver::MeshBuilder::Vertex>::_M_fill_insert();
    }
    v28 = *((int *)a2 + 9);
    if ( (int)v28 >= 1 )
    {
      v29 = *((_DWORD *)this + 4);
      if ( v29 >= 1 )
      {
        v30 = *v26;
        v31 = *((_QWORD *)a2 + 6);
        v32 = *((_DWORD *)a2 + 8);
        v33 = 0;
        v34 = *v26;
        do
        {
          if ( v32 == 5126 )
          {
            if ( (unsigned int)v28 >= 8 )
            {
              v36 = v30 + 68 * v33;
              if ( v31 + 4 * v28 <= v36 || v31 >= v36 + 4 * v28 )
              {
                v37 = 0;
                v38 = v28 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v39 = *(_OWORD *)(v31 + v37);
                  v40 = *(_OWORD *)(v31 + v37 + 16);
                  v41 = (_OWORD *)(v34 + v37);
                  v38 -= 8LL;
                  v37 += 32;
                  *v41 = v39;
                  v41[1] = v40;
                }
                while ( v38 );
                v35 = v28 & 0x7FFFFFF8;
                if ( (v28 & 0xFFFFFFFFFFFFFFF8LL) == v28 )
                  goto LABEL_42;
              }
              else
              {
                v35 = 0;
              }
            }
            else
            {
              v35 = 0;
            }
            do
            {
              v42 = 4 * v35;
              v43 = *(_DWORD *)(v31 + 4 * v35++);
              *(_DWORD *)(v34 + v42) = v43;
            }
            while ( v28 != v35 );
          }
LABEL_42:
          result = *((unsigned int *)a2 + 10);
          ++v33;
          v34 += 68;
          v31 += result;
        }
        while ( (_DWORD)v33 != v29 );
      }
    }
    v44 = *((int *)a2 + 15);
    if ( (int)v44 >= 1 )
    {
      v45 = *((_DWORD *)this + 4);
      if ( v45 >= 1 )
      {
        v46 = *v26;
        v47 = *((_QWORD *)a2 + 9);
        v48 = *((_DWORD *)a2 + 14);
        v49 = 0;
        v50 = *v26 + 16;
        v51 = *v26 + 32;
        result = 5126;
        do
        {
          if ( v48 == 5126 )
          {
            if ( (unsigned int)v44 >= 8 )
            {
              v53 = v46 + 68 * v49 + 16;
              if ( v47 + 4 * v44 <= v53 || v47 >= v53 + 4 * v44 )
              {
                v54 = (__int128 *)(v47 + 16);
                v55 = v44 & 0xFFFFFFFFFFFFFFF8LL;
                v56 = (_OWORD *)v51;
                do
                {
                  v57 = *(v54 - 1);
                  v58 = *v54;
                  v54 += 2;
                  v55 -= 8LL;
                  *(v56 - 1) = v57;
                  *v56 = v58;
                  v56 += 2;
                }
                while ( v55 );
                v52 = v44 & 0x7FFFFFF8;
                if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) == v44 )
                  goto LABEL_56;
              }
              else
              {
                v52 = 0;
              }
            }
            else
            {
              v52 = 0;
            }
            do
            {
              v59 = 4 * v52;
              v60 = *(_DWORD *)(v47 + 4 * v52++);
              *(_DWORD *)(v50 + v59) = v60;
            }
            while ( v44 != v52 );
          }
LABEL_56:
          ++v49;
          v50 += 68;
          v47 += *((unsigned int *)a2 + 16);
          v51 += 68;
        }
        while ( (_DWORD)v49 != v45 );
      }
    }
    LODWORD(v61) = *((_DWORD *)a2 + 23);
    if ( (int)v61 >= 1 )
    {
      v62 = *((_DWORD *)this + 4);
      if ( v62 >= 1 )
      {
        v63 = *((_QWORD *)a2 + 13);
        v64 = 0;
        v65 = *v26 + 32;
        do
        {
          if ( *((_DWORD *)a2 + 22) == 5121 && (int)v61 >= 1 )
          {
            v66 = 0;
            do
            {
              *(_BYTE *)(v65 + v66) = *(_BYTE *)(v63 + v66);
              v61 = *((int *)a2 + 23);
              ++v66;
            }
            while ( v66 < v61 );
          }
          ++v64;
          v65 += 68;
          v63 += *((unsigned int *)a2 + 24);
        }
        while ( v64 != v62 );
      }
    }
    v67 = *((int *)a2 + 80);
    if ( (int)v67 >= 1 )
    {
      v68 = *((_QWORD *)a2 + 10);
      v69 = *((_DWORD *)this + 4);
      v70 = 0;
      while ( v69 < 1 )
      {
LABEL_81:
        if ( ++v70 >= v67 )
          goto LABEL_82;
      }
      v71 = *v26;
      v72 = (int *)(v68 + 24 * v70);
      v73 = *((_QWORD *)v72 + 2);
      v74 = v72 + 1;
      v76 = *v72;
      v75 = (unsigned int *)(v72 + 2);
      result = v76;
      v77 = 0;
      v78 = *v26 + 16 * v70 + 36;
      while ( 1 )
      {
        if ( (_DWORD)result != 5126 )
          goto LABEL_80;
        v79 = *v74;
        if ( (int)v79 < 1 )
          goto LABEL_80;
        if ( (unsigned int)v79 >= 8 )
        {
          v81 = v71 + 68 * v77 + 16 * v70 + 36;
          if ( v73 + 4 * v79 <= v81 || v73 >= v81 + 4 * v79 )
          {
            v80 = v79 & 0x7FFFFFF8;
            v82 = 0;
            v83 = v79 & 0xFFFFFFFFFFFFFFF8LL;
            do
            {
              v84 = *(_OWORD *)(v73 + v82);
              v85 = *(_OWORD *)(v73 + v82 + 16);
              v86 = (_OWORD *)(v78 + v82);
              v83 -= 8LL;
              v82 += 32;
              *v86 = v84;
              v86[1] = v85;
            }
            while ( v83 );
            if ( v80 == v79 )
              goto LABEL_80;
          }
          else
          {
            v80 = 0;
          }
        }
        else
        {
          v80 = 0;
        }
        do
        {
          v87 = 4 * v80;
          v88 = *(_DWORD *)(v73 + 4 * v80++);
          *(_DWORD *)(v78 + v87) = v88;
        }
        while ( v79 != v80 );
LABEL_80:
        ++v77;
        v78 += 68;
        v73 += *v75;
        if ( (_DWORD)v77 == v69 )
          goto LABEL_81;
      }
    }
LABEL_82:
    if ( *((int *)a2 + 3) > 0 )
    {
      v89 = *((_QWORD *)a2 + 37);
      v90 = *((_QWORD *)a2 + 38);
      v91 = *((_DWORD *)a2 + 1);
      if ( v89 == v90 )
        v92 = 3 * v91;
      else
        v92 = (((unsigned __int64)(v90 - v89) >> 1) & 0xFFFFFFFE) + v91;
      *((_DWORD *)this + 12) = v92;
      v109 = 0;
      v93 = this[7];
      v94 = this[8];
      v95 = (v94 - v93) >> 2;
      if ( v95 < v92 )
      {
        result = std::vector<int>::_M_fill_insert((int)this + 56, v94);
        v92 = *((_DWORD *)this + 12);
        if ( v92 < 1 )
          return result;
        goto LABEL_92;
      }
      if ( v95 > v92 )
        this[8] = (Caver::Mesh *)((char *)v93 + 4 * v92);
      if ( v92 >= 1 )
      {
LABEL_92:
        v96 = this[7];
        v97 = *((_QWORD *)a2 + 3);
        v98 = *((_DWORD *)a2 + 2);
        for ( i = 0; i != v92; ++i )
        {
          if ( v98 == 5123 && *((int *)a2 + 3) >= 1 )
          {
            v100 = 0;
            do
            {
              *((_DWORD *)v96 + v100) = *(unsigned __int16 *)(v97 + 2 * v100);
              ++v100;
            }
            while ( v100 < *((int *)a2 + 3) );
          }
          v96 = (Caver::Mesh *)((char *)v96 + 4);
          v97 += *((unsigned int *)a2 + 4);
        }
      }
    }
  }
  return result;
}

