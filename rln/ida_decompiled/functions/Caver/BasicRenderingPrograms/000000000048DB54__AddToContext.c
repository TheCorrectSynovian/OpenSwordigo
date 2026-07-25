/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048DB54
 * Mangled: _ZN5Caver22BasicRenderingPrograms12AddToContextEPNS_16RenderingContextE
 * Demangled: Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001FCC30  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 21
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5B30  Caver::RenderingProgram::LinkWithShaders(boost::shared_ptr<Caver::RenderingProgramShader> const&,boost::shared_ptr<Caver::RenderingProgramShader> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F70  Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F79D0  boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *   0x00000000001FBF00  Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext *,std::string const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FF1A0  Caver::RenderingProgram::AddVertexAttribute(uint,std::string const&)
 *   0x0000000000200230  Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *   0x0000000000200360  boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>(Caver::RenderingProgramShader *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202AC0  Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext *,std::string const&,Caver::RenderingProgramShaderType,char const*)
 *   0x0000000000202B20  Caver::RenderingProgramShader::~RenderingProgramShader()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 468
 *   insn=0x000000000048DB68 string=0x000000000048DB6C "V"
 *   insn=0x000000000048DB84 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048DB88 string=0x000000000048DB8C "A"
 *   insn=0x000000000048DB8C string=0x0000000000596B55 "POSITION"
 *   insn=0x000000000048DB98 string=0x000000000048DB9C "d"
 *   insn=0x000000000048DBA0 string=0x000000000048DBA4 "D"
 *   insn=0x000000000048DBA4 string=0x0000000000596A7C "\t\t\tattribute highp vec4 vertexPosition;\t\t\tuniform mediump mat4 mvpMatrix;\t\t\tvoid main(void)\t\t\t{\t\t\t\tgl_Position = mvpMatrix * vertexPosition;\..."
 *   insn=0x000000000048DBE0 string=0x000000000048DBE4 "["
 *   insn=0x000000000048DBFC string=0x000000000048DC00 "u"
 *   insn=0x000000000048DC04 string=0x000000000048DC08 ""
 *   insn=0x000000000048DC14 string=0x000000000048DC18 "\t@"
 *   insn=0x000000000048DC28 string=0x000000000048DC2C ""
 *   insn=0x000000000048DC38 string=0x000000000048DC3C "@"
 *   insn=0x000000000048DC64 string=0x000000000048DC68 "A"
 *   insn=0x000000000048DC68 string=0x0000000000596B5E "mvpMatrix"
 *   insn=0x000000000048DC84 string=0x000000000048DC88 "j"
 *   insn=0x000000000048DCA0 string=0x000000000048DCA4 "O"
 *   insn=0x000000000048DCA8 string=0x000000000048DCAC "A"
 *   insn=0x000000000048DCAC string=0x0000000000596B68 "WHITE"
 *   insn=0x000000000048DCC0 string=0x000000000048DCC4 "D"
 *   insn=0x000000000048DCC4 string=0x0000000000596B0D "\t\t\tvoid main (void)\t\t\t{\t\t\t\tgl_FragColor = vec4(1.0, 1.0, 1.0 ,1.0);\t\t\t}"
 *   insn=0x000000000048DCD8 string=0x000000000048DCDC "y"
 *   insn=0x000000000048DD1C string=0x000000000048DD20 "u"
 *   insn=0x000000000048DD24 string=0x000000000048DD28 ""
 *   insn=0x000000000048DD34 string=0x000000000048DD38 "\t@"
 *   insn=0x000000000048DD48 string=0x000000000048DD4C ""
 *   insn=0x000000000048DD58 string=0x000000000048DD5C "@"
 *   insn=0x000000000048DD88 string=0x000000000048DD8C "A"
 *   insn=0x000000000048DD8C string=0x0000000000596B6E "PROGRAM_UNIFORM_COLOR"
 *   insn=0x000000000048DDAC string=0x000000000048DDB0 "T"
 *   insn=0x000000000048DDB0 string=0x00000000001FBF00 "0'"
 *   insn=0x000000000048DDC8 string=0x00000000001F79D0 "0'"
 *   insn=0x000000000048DDF0 string=0x000000000048DDF4 "u"
 *   insn=0x000000000048DDF8 string=0x000000000048DDFC ""
 *   insn=0x000000000048DE08 string=0x000000000048DE0C "\t@"
 *   insn=0x000000000048DE1C string=0x000000000048DE20 ""
 *   insn=0x000000000048DE2C string=0x000000000048DE30 "@"
 *   insn=0x000000000048DE50 string=0x000000000048DE54 "A"
 *   insn=0x000000000048DE54 string=0x0000000000596B84 "vertexPosition"
 *   insn=0x000000000048DE60 string=0x000000000048DE64 "Uc"
 *   insn=0x000000000048DE90 string=0x000000000048DE94 "'"
 *   insn=0x000000000048DE94 string=0x00000000001F5B30 "P'"
 *   insn=0x000000000048DEA0 string=0x000000000048DEA4 "3"
 *   insn=0x000000000048DEA4 string=0x00000000001F6F70 "0'"
 *   insn=0x000000000048DEB0 string=0x000000000048DEB4 "A"
 *   insn=0x000000000048DEB4 string=0x0000000000596B93 "PROGRAM_UNIFORM_COLOR_TEXTURING"
 *   insn=0x000000000048DEC0 string=0x000000000048DEC4 "=c"
 *   insn=0x000000000048DED4 string=0x000000000048DED8 "\n"
 *   insn=0x000000000048DF18 string=0x000000000048DF1C "u"
 *   insn=0x000000000048DF20 string=0x000000000048DF24 ""
 *   insn=0x000000000048DF30 string=0x000000000048DF34 "\t@"
 *   insn=0x000000000048DF44 string=0x000000000048DF48 ""
 *   insn=0x000000000048DF54 string=0x000000000048DF58 "@"
 *   insn=0x000000000048DF78 string=0x000000000048DF7C "A"
 *   insn=0x000000000048DF88 string=0x000000000048DF8C "c"
 *   insn=0x000000000048DFB8 string=0x000000000048DFBC "A"
 *   insn=0x000000000048DFBC string=0x0000000000596BB3 "texCoord"
 *   insn=0x000000000048DFD8 string=0x000000000048DFDC "q"
 *   insn=0x000000000048E010 string=0x000000000048E014 "s"
 *   insn=0x000000000048E018 string=0x000000000048E01C "A"
 *   insn=0x000000000048E01C string=0x0000000000596BBC "PROGRAM_VARYING_COLOR"
 *   insn=0x000000000048E054 string=0x000000000048E058 "^"
 *   insn=0x000000000048E064 string=0x000000000048E068 ":"
 *   insn=0x000000000048E080 string=0x000000000048E084 "u"
 *   insn=0x000000000048E088 string=0x000000000048E08C ""
 *   insn=0x000000000048E098 string=0x000000000048E09C "\t@"
 *   insn=0x000000000048E0AC string=0x000000000048E0B0 ""
 *   insn=0x000000000048E0BC string=0x000000000048E0C0 "@"
 *   insn=0x000000000048E0E0 string=0x000000000048E0E4 "A"
 *   insn=0x000000000048E100 string=0x000000000048E104 "'"
 *   insn=0x000000000048E118 string=0x000000000048E11C "A"
 *   insn=0x000000000048E11C string=0x0000000000596BD2 "vertexColor"
 *   insn=0x000000000048E148 string=0x000000000048E14C "a!"
 *   insn=0x000000000048E158 string=0x000000000048E15C "u"
 *   insn=0x000000000048E170 string=0x000000000048E174 ""
 *   insn=0x000000000048E178 string=0x000000000048E17C "A"
 *   insn=0x000000000048E17C string=0x0000000000596BDE "PROGRAM_VARYING_COLOR_TEXTURING"
 *   insn=0x000000000048E19C string=0x000000000048E1A0 "X"
 *   insn=0x000000000048E1E0 string=0x000000000048E1E4 "u"
 *   insn=0x000000000048E1E8 string=0x000000000048E1EC ""
 *   insn=0x000000000048E1F8 string=0x000000000048E1FC "\t@"
 *   insn=0x000000000048E20C string=0x000000000048E210 ""
 *   insn=0x000000000048E21C string=0x000000000048E220 "@"
 *   insn=0x000000000048E240 string=0x000000000048E244 "A"
 *   insn=0x000000000048E250 string=0x000000000048E254 "Yb"
 *   insn=0x000000000048E270 string=0x000000000048E274 "a"
 *   insn=0x000000000048E278 string=0x000000000048E27C "A"
 *   insn=0x000000000048E288 string=0x000000000048E28C "Kb"
 *   insn=0x000000000048E2B8 string=0x000000000048E2BC "A"
 *   insn=0x000000000048E2C8 string=0x000000000048E2CC ";b"
 *   insn=0x000000000048E2F8 string=0x000000000048E2FC ""
 *   insn=0x000000000048E310 string=0x000000000048E314 "3"
 *   insn=0x000000000048E314 string=0x000000000048E318 "h"
 *   insn=0x000000000048E318 string=0x000000000048E31C ""
 *   insn=0x000000000048E31C string=0x000000000048E320 "h"
 *   insn=0x000000000048E324 string=0x000000000048E328 "h"
 *   insn=0x000000000048E328 string=0x000000000048E32C "\t@"
 *   insn=0x000000000048E334 string=0x000000000048E338 "h\n@"
 *   insn=0x000000000048E338 string=0x000000000048E33C ""
 *   insn=0x000000000048E33C string=0x000000000048E340 "h\n"
 *   insn=0x000000000048E344 string=0x000000000048E348 "h"
 *   insn=0x000000000048E348 string=0x000000000048E34C "@"
 *   insn=0x000000000048E358 string=0x000000000048E35C "3"
 *   insn=0x000000000048E35C string=0x000000000048E360 "h"
 *   insn=0x000000000048E360 string=0x000000000048E364 ""
 *   insn=0x000000000048E364 string=0x000000000048E368 "h"
 *   insn=0x000000000048E36C string=0x000000000048E370 "h"
 *   insn=0x000000000048E370 string=0x000000000048E374 "\t@"
 *   insn=0x000000000048E37C string=0x000000000048E380 "h\n@"
 *   insn=0x000000000048E380 string=0x000000000048E384 ""
 *   insn=0x000000000048E384 string=0x000000000048E388 "h\n"
 *   insn=0x000000000048E38C string=0x000000000048E390 "h"
 *   insn=0x000000000048E390 string=0x000000000048E394 "@"
 *   insn=0x000000000048E3A0 string=0x000000000048E3A4 "3"
 *   insn=0x000000000048E3A4 string=0x000000000048E3A8 "h"
 *   insn=0x000000000048E3A8 string=0x000000000048E3AC ""
 *   insn=0x000000000048E3AC string=0x000000000048E3B0 "h"
 *   insn=0x000000000048E3B4 string=0x000000000048E3B8 "h"
 *   insn=0x000000000048E3BC string=0x000000000048E3C0 "\t@"
 *   insn=0x000000000048E3C4 string=0x000000000048E3C8 "h\n@"
 *   insn=0x000000000048E3C8 string=0x000000000048E3CC ""
 *   insn=0x000000000048E3CC string=0x000000000048E3D0 "h\n"
 *   insn=0x000000000048E3D4 string=0x000000000048E3D8 "h"
 *   insn=0x000000000048E3DC string=0x000000000048E3E0 "@"
 *   insn=0x000000000048E410 string=0x000000000048E414 ")=G"
 *   insn=0x000000000048E414 string=0x000000000048E418 "!"
 *   insn=0x000000000048E41C string=0x000000000048E420 "\t"
 *   insn=0x000000000048E41C string=0x000000000048E62C "\t"
 *   insn=0x000000000048E420 string=0x000000000048E424 "*"
 *   insn=0x000000000048E424 string=0x000000000048E428 "\n"
 *   insn=0x000000000048E430 string=0x000000000048E638 "?"
 *   insn=0x000000000048E434 string=0x000000000048E438 ")=G"
 *   insn=0x000000000048E438 string=0x000000000048E43C "!"
 *   insn=0x000000000048E43C string=0x000000000048E440 "i"
 *   insn=0x000000000048E440 string=0x000000000048E444 "\t"
 *   insn=0x000000000048E440 string=0x000000000048E64C "\t"
 *   insn=0x000000000048E444 string=0x000000000048E448 "*"
 *   insn=0x000000000048E448 string=0x000000000048E44C "\n"
 *   insn=0x000000000048E454 string=0x000000000048E658 "?"
 *   insn=0x000000000048E458 string=0x000000000048E45C ")=G"
 *   insn=0x000000000048E45C string=0x000000000048E460 "!"
 *   insn=0x000000000048E460 string=0x000000000048E464 "I"
 *   insn=0x000000000048E464 string=0x000000000048E468 "\t"
 *   insn=0x000000000048E464 string=0x000000000048E66C "\t"
 *   insn=0x000000000048E468 string=0x000000000048E46C "*"
 *   insn=0x000000000048E46C string=0x000000000048E470 "\n"
 *   insn=0x000000000048E478 string=0x000000000048E678 "?"
 *   insn=0x000000000048E47C string=0x000000000048E480 ")=G"
 *   insn=0x000000000048E480 string=0x000000000048E484 "!"
 *   insn=0x000000000048E484 string=0x000000000048E488 ")"
 *   insn=0x000000000048E488 string=0x000000000048E48C "\t"
 *   insn=0x000000000048E488 string=0x000000000048E68C "\t"
 *   insn=0x000000000048E48C string=0x000000000048E490 "*"
 *   insn=0x000000000048E490 string=0x000000000048E494 "\n"
 *   insn=0x000000000048E49C string=0x000000000048E698 "?"
 *   insn=0x000000000048E4A0 string=0x000000000048E4A4 ")=G"
 *   insn=0x000000000048E4A4 string=0x000000000048E4A8 "!"
 *   insn=0x000000000048E4A8 string=0x000000000048E4AC "\t"
 *   insn=0x000000000048E4AC string=0x000000000048E4B0 "\t"
 *   insn=0x000000000048E4AC string=0x000000000048E6AC "\t"
 *   insn=0x000000000048E4B0 string=0x000000000048E4B4 "*"
 *   insn=0x000000000048E4B4 string=0x000000000048E4B8 "\n"
 *   insn=0x000000000048E4BC string=0x000000000048E4C0 "~"
 *   insn=0x000000000048E4C0 string=0x000000000048E6B8 "?"
 *   insn=0x000000000048E4C4 string=0x000000000048E4C8 ")=G"
 *   insn=0x000000000048E4C8 string=0x000000000048E4CC "!"
 *   insn=0x000000000048E4D0 string=0x000000000048E4D4 "\t"
 *   insn=0x000000000048E4D0 string=0x000000000048E6CC "\t"
 *   insn=0x000000000048E4D4 string=0x000000000048E4D8 "*"
 *   insn=0x000000000048E4D8 string=0x000000000048E4DC "\n"
 *   insn=0x000000000048E4E0 string=0x000000000048E4E4 "}"
 *   insn=0x000000000048E4E4 string=0x000000000048E6D8 "?"
 *   insn=0x000000000048E4E8 string=0x000000000048E4EC ")=G"
 *   insn=0x000000000048E4EC string=0x000000000048E4F0 "!"
 *   insn=0x000000000048E4F4 string=0x000000000048E4F8 "\t"
 *   insn=0x000000000048E4F4 string=0x000000000048E6EC "\t"
 *   insn=0x000000000048E4F8 string=0x000000000048E4FC "*"
 *   insn=0x000000000048E4FC string=0x000000000048E500 "\n"
 *   insn=0x000000000048E504 string=0x000000000048E508 "|"
 *   insn=0x000000000048E508 string=0x000000000048E6F8 "?"
 *   insn=0x000000000048E50C string=0x000000000048E510 ")=G"
 *   insn=0x000000000048E510 string=0x000000000048E514 "!"
 *   insn=0x000000000048E518 string=0x000000000048E51C "\t"
 *   insn=0x000000000048E518 string=0x000000000048E70C "\t"
 *   insn=0x000000000048E51C string=0x000000000048E520 "*"
 *   insn=0x000000000048E520 string=0x000000000048E524 "\n"
 *   insn=0x000000000048E528 string=0x000000000048E52C "{"
 *   insn=0x000000000048E52C string=0x000000000048E718 "?"
 *   insn=0x000000000048E530 string=0x000000000048E534 ")=G"
 *   insn=0x000000000048E534 string=0x000000000048E538 "!"
 *   insn=0x000000000048E53C string=0x000000000048E540 "\t"
 *   insn=0x000000000048E53C string=0x000000000048E72C "\t"
 *   insn=0x000000000048E540 string=0x000000000048E544 "*"
 *   insn=0x000000000048E544 string=0x000000000048E548 "\n"
 *   insn=0x000000000048E54C string=0x000000000048E550 "z"
 *   insn=0x000000000048E550 string=0x000000000048E738 "?"
 *   insn=0x000000000048E554 string=0x000000000048E558 ")=G"
 *   insn=0x000000000048E558 string=0x000000000048E55C "!"
 *   insn=0x000000000048E55C string=0x000000000048E560 "i"
 *   insn=0x000000000048E560 string=0x000000000048E564 "\t"
 *   insn=0x000000000048E560 string=0x000000000048E74C "\t"
 *   insn=0x000000000048E564 string=0x000000000048E568 "*"
 *   insn=0x000000000048E568 string=0x000000000048E56C "\n"
 *   insn=0x000000000048E570 string=0x000000000048E574 "y"
 *   insn=0x000000000048E574 string=0x000000000048E758 "?"
 *   insn=0x000000000048E578 string=0x000000000048E57C ")=G"
 *   insn=0x000000000048E57C string=0x000000000048E580 "!"
 *   insn=0x000000000048E580 string=0x000000000048E584 "I"
 *   insn=0x000000000048E584 string=0x000000000048E588 "\t"
 *   insn=0x000000000048E584 string=0x000000000048E76C "\t"
 *   insn=0x000000000048E588 string=0x000000000048E58C "*"
 *   insn=0x000000000048E58C string=0x000000000048E590 "\n"
 *   insn=0x000000000048E594 string=0x000000000048E598 "x"
 *   insn=0x000000000048E598 string=0x000000000048E778 "?"
 *   insn=0x000000000048E59C string=0x000000000048E5A0 ")=G"
 *   insn=0x000000000048E5A0 string=0x000000000048E5A4 "!"
 *   insn=0x000000000048E5A4 string=0x000000000048E5A8 ")"
 *   insn=0x000000000048E5A8 string=0x000000000048E5AC "\t"
 *   insn=0x000000000048E5A8 string=0x000000000048E78C "\t"
 *   insn=0x000000000048E5AC string=0x000000000048E5B0 "*"
 *   insn=0x000000000048E5B0 string=0x000000000048E5B4 "\n"
 *   insn=0x000000000048E5B8 string=0x000000000048E5BC "w"
 *   insn=0x000000000048E5BC string=0x000000000048E798 "?"
 *   insn=0x000000000048E5C0 string=0x000000000048E5C4 ")=G"
 *   insn=0x000000000048E5C4 string=0x000000000048E5C8 "!"
 *   insn=0x000000000048E5C8 string=0x000000000048E5CC "\t"
 *   insn=0x000000000048E5CC string=0x000000000048E5D0 "\t"
 *   insn=0x000000000048E5CC string=0x000000000048E7AC "\t"
 *   insn=0x000000000048E5D0 string=0x000000000048E5D4 "*"
 *   insn=0x000000000048E5D4 string=0x000000000048E5D8 "\n"
 *   insn=0x000000000048E5DC string=0x000000000048E5E0 "v"
 *   insn=0x000000000048E5E0 string=0x000000000048E7B8 "?"
 *   insn=0x000000000048E5E4 string=0x000000000048E5E8 ")=G"
 *   insn=0x000000000048E5E8 string=0x000000000048E5EC "!"
 *   insn=0x000000000048E5F0 string=0x000000000048E5F4 "\t"
 *   insn=0x000000000048E5F0 string=0x000000000048E7CC "\t"
 *   insn=0x000000000048E5F4 string=0x000000000048E5F8 "*"
 *   insn=0x000000000048E5F8 string=0x000000000048E5FC "\n"
 *   insn=0x000000000048E600 string=0x000000000048E604 "u"
 *   insn=0x000000000048E604 string=0x000000000048E7D8 "?"
 *   insn=0x000000000048E608 string=0x000000000048E60C ")=G"
 *   insn=0x000000000048E60C string=0x000000000048E610 "!"
 *   insn=0x000000000048E614 string=0x000000000048E618 "\t"
 *   insn=0x000000000048E614 string=0x000000000048E7EC "\t"
 *   insn=0x000000000048E618 string=0x000000000048E61C "*"
 *   insn=0x000000000048E61C string=0x000000000048E620 "\n"
 *   insn=0x000000000048E624 string=0x000000000048E628 "t"
 *   insn=0x000000000048E628 string=0x000000000048E7F8 "?"
 *   insn=0x000000000048E62C string=0x000000000048E630 "*"
 *   insn=0x000000000048E630 string=0x000000000048E634 "\n"
 *   insn=0x000000000048E638 string=0x000000000048E63C "L"
 *   insn=0x000000000048E640 string=0x000000000048E644 "Xo"
 *   insn=0x000000000048E64C string=0x000000000048E650 "*"
 *   insn=0x000000000048E650 string=0x000000000048E654 "\n"
 *   insn=0x000000000048E660 string=0x000000000048E664 "Po"
 *   insn=0x000000000048E66C string=0x000000000048E670 "*"
 *   insn=0x000000000048E670 string=0x000000000048E674 "\n"
 *   insn=0x000000000048E680 string=0x000000000048E684 "Ho"
 *   insn=0x000000000048E68C string=0x000000000048E690 "*"
 *   insn=0x000000000048E690 string=0x000000000048E694 "\n"
 *   insn=0x000000000048E6A0 string=0x000000000048E6A4 "@o"
 *   insn=0x000000000048E6AC string=0x000000000048E6B0 "*"
 *   insn=0x000000000048E6B0 string=0x000000000048E6B4 "\n"
 *   insn=0x000000000048E6B8 string=0x000000000048E6BC "l"
 *   insn=0x000000000048E6C0 string=0x000000000048E6C4 "8o"
 *   insn=0x000000000048E6CC string=0x000000000048E6D0 "*"
 *   insn=0x000000000048E6D0 string=0x000000000048E6D4 "\n"
 *   insn=0x000000000048E6E0 string=0x000000000048E6E4 "0o"
 *   insn=0x000000000048E6E4 string=0x000000000048E6E8 "$"
 *   insn=0x000000000048E6EC string=0x000000000048E6F0 "*"
 *   insn=0x000000000048E6F0 string=0x000000000048E6F4 "\n"
 *   insn=0x000000000048E700 string=0x000000000048E704 "(o"
 *   insn=0x000000000048E704 string=0x000000000048E708 "*"
 *   insn=0x000000000048E70C string=0x000000000048E710 "*"
 *   insn=0x000000000048E710 string=0x000000000048E714 "\n"
 *   insn=0x000000000048E720 string=0x000000000048E724 " o"
 *   insn=0x000000000048E724 string=0x000000000048E728 "2"
 *   insn=0x000000000048E72C string=0x000000000048E730 "*"
 *   insn=0x000000000048E730 string=0x000000000048E734 "\n"
 *   insn=0x000000000048E738 string=0x000000000048E73C ","
 *   insn=0x000000000048E744 string=0x000000000048E748 "f"
 *   insn=0x000000000048E74C string=0x000000000048E750 "*"
 *   insn=0x000000000048E750 string=0x000000000048E754 "\n"
 *   insn=0x000000000048E764 string=0x000000000048E768 "l"
 *   insn=0x000000000048E76C string=0x000000000048E770 "*"
 *   insn=0x000000000048E770 string=0x000000000048E774 "\n"
 *   insn=0x000000000048E780 string=0x000000000048E784 "o"
 *   insn=0x000000000048E784 string=0x000000000048E788 "r"
 *   insn=0x000000000048E78C string=0x000000000048E790 "*"
 *   insn=0x000000000048E790 string=0x000000000048E794 "\n"
 *   insn=0x000000000048E798 string=0x000000000048E79C ","
 *   insn=0x000000000048E7AC string=0x000000000048E7B0 "*"
 *   insn=0x000000000048E7B0 string=0x000000000048E7B4 "\n"
 *   insn=0x000000000048E7CC string=0x000000000048E7D0 "*"
 *   insn=0x000000000048E7D0 string=0x000000000048E7D4 "\n"
 *   insn=0x000000000048E7EC string=0x000000000048E7F0 "*"
 *   insn=0x000000000048E7F0 string=0x000000000048E7F4 "\n"
 *   insn=0x000000000048E80C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048E81C string=0x000000000048E820 "(a"
 *   insn=0x000000000048E824 string=0x000000000048E828 "`'"
 *   insn=0x000000000048E82C string=0x000000000048E830 "J=G"
 *   insn=0x000000000048E830 string=0x000000000048E834 ")!"
 *   insn=0x000000000048E838 string=0x000000000048E83C "*"
 *   insn=0x000000000048E838 string=0x000000000048EA28 "*"
 *   insn=0x000000000048E83C string=0x000000000048E840 "K"
 *   insn=0x000000000048E840 string=0x000000000048E844 "+"
 *   insn=0x000000000048E848 string=0x000000000048E84C "o"
 *   insn=0x000000000048E84C string=0x000000000048EA08 "_"
 *   insn=0x000000000048E858 string=0x000000000048E85C "(a"
 *   insn=0x000000000048E868 string=0x000000000048E86C "J=G"
 *   insn=0x000000000048E86C string=0x000000000048E870 ")!"
 *   insn=0x000000000048E874 string=0x000000000048E878 "*"
 *   insn=0x000000000048E878 string=0x000000000048E87C "K"
 *   insn=0x000000000048E87C string=0x000000000048E880 "+"
 *   insn=0x000000000048E884 string=0x000000000048E888 "`"
 *   insn=0x000000000048E894 string=0x000000000048E898 "(a"
 *   insn=0x000000000048E8A4 string=0x000000000048E8A8 "J=G"
 *   insn=0x000000000048E8A8 string=0x000000000048E8AC ")!"
 *   insn=0x000000000048E8B0 string=0x000000000048E8B4 "*"
 *   insn=0x000000000048E8B4 string=0x000000000048E8B8 "K"
 *   insn=0x000000000048E8B8 string=0x000000000048E8BC "+"
 *   insn=0x000000000048E8C0 string=0x000000000048E8C4 "Q"
 *   insn=0x000000000048E8D8 string=0x000000000048E8DC "(a"
 *   insn=0x000000000048E8E8 string=0x000000000048E8EC "J=G"
 *   insn=0x000000000048E8EC string=0x000000000048E8F0 ")!"
 *   insn=0x000000000048E8F4 string=0x000000000048E8F8 "*"
 *   insn=0x000000000048E8F8 string=0x000000000048E8FC "K"
 *   insn=0x000000000048E8FC string=0x000000000048E900 "+"
 *   insn=0x000000000048E904 string=0x000000000048E908 "@"
 *   insn=0x000000000048E914 string=0x000000000048E918 "(a"
 *   insn=0x000000000048E924 string=0x000000000048E928 "J=G"
 *   insn=0x000000000048E928 string=0x000000000048E92C ")!"
 *   insn=0x000000000048E930 string=0x000000000048E934 "*"
 *   insn=0x000000000048E934 string=0x000000000048E938 "K"
 *   insn=0x000000000048E938 string=0x000000000048E93C "+"
 *   insn=0x000000000048E940 string=0x000000000048E944 "1"
 *   insn=0x000000000048E958 string=0x000000000048E95C "(a"
 *   insn=0x000000000048E968 string=0x000000000048E96C "J=G"
 *   insn=0x000000000048E96C string=0x000000000048E970 ")!"
 *   insn=0x000000000048E974 string=0x000000000048E978 "*"
 *   insn=0x000000000048E978 string=0x000000000048E97C "K"
 *   insn=0x000000000048E97C string=0x000000000048E980 "+"
 *   insn=0x000000000048E984 string=0x000000000048E988 " "
 *   insn=0x000000000048E994 string=0x000000000048E998 "(a"
 *   insn=0x000000000048E9A4 string=0x000000000048E9A8 "J=G"
 *   insn=0x000000000048E9A8 string=0x000000000048E9AC ")!"
 *   insn=0x000000000048E9B0 string=0x000000000048E9B4 "*"
 *   insn=0x000000000048E9B4 string=0x000000000048E9B8 "K"
 *   insn=0x000000000048E9B8 string=0x000000000048E9BC "+"
 *   insn=0x000000000048E9D8 string=0x000000000048E9DC "(a"
 *   insn=0x000000000048E9E8 string=0x000000000048E9EC "J=G"
 *   insn=0x000000000048E9EC string=0x000000000048E9F0 ")!"
 *   insn=0x000000000048E9F4 string=0x000000000048E9F8 "*"
 *   insn=0x000000000048E9F8 string=0x000000000048E9FC "K"
 *   insn=0x000000000048E9FC string=0x000000000048EA00 "+"
 *   insn=0x000000000048EA08 string=0x000000000048EA0C "L"
 *   insn=0x000000000048EA14 string=0x000000000048EA18 "cn"
 *   insn=0x000000000048EA28 string=0x000000000048EA2C "K"
 *   insn=0x000000000048EA2C string=0x000000000048EA30 "+"
 *   insn=0x000000000048EA30 string=0x000000000048EA34 "_"
 *   insn=0x000000000048EA50 string=0x000000000048EA54 "f"
 *   insn=0x000000000048EA74 string=0x000000000048EA78 "(a"
 *   insn=0x000000000048EA7C string=0x000000000048EA80 " "
 *   insn=0x000000000048EA84 string=0x000000000048EA88 "J=G"
 *   insn=0x000000000048EA88 string=0x000000000048EA8C ")!"
 *   insn=0x000000000048EA90 string=0x000000000048EA94 "*"
 *   insn=0x000000000048EA90 string=0x000000000048EAC4 "*"
 *   insn=0x000000000048EA94 string=0x000000000048EA98 "K"
 *   insn=0x000000000048EA98 string=0x000000000048EA9C "+"
 *   insn=0x000000000048EAA0 string=0x000000000048EAA4 "_"
 *   insn=0x000000000048EAB0 string=0x000000000048EAB4 "<n"
 *   insn=0x000000000048EAC4 string=0x000000000048EAC8 "K"
 *   insn=0x000000000048EAC8 string=0x000000000048EACC "+"
 *   insn=0x000000000048EACC string=0x000000000048EAD0 "_"
 *   insn=0x000000000048EAFC string=0x000000000048EB00 "(a"
 *   insn=0x000000000048EB08 string=0x000000000048EBE8 "x\t"
 *   insn=0x000000000048EB0C string=0x000000000048EB10 "J=G"
 *   insn=0x000000000048EB10 string=0x000000000048EB14 ")!"
 *   insn=0x000000000048EB14 string=0x000000000048EB18 "J"
 *   insn=0x000000000048EB18 string=0x000000000048EB1C "*"
 *   insn=0x000000000048EB18 string=0x000000000048EC00 "*"
 *   insn=0x000000000048EB1C string=0x000000000048EB20 "K"
 *   insn=0x000000000048EB20 string=0x000000000048EB24 "+"
 *   insn=0x000000000048EB28 string=0x000000000048EB2C "*"
 *   insn=0x000000000048EB2C string=0x000000000048EBD4 "_"
 *   insn=0x000000000048EB34 string=0x000000000048EB38 "(a"
 *   insn=0x000000000048EB3C string=0x000000000048EB40 "@"
 *   insn=0x000000000048EB44 string=0x000000000048EB48 "J=G"
 *   insn=0x000000000048EB48 string=0x000000000048EB4C ")!"
 *   insn=0x000000000048EB50 string=0x000000000048EB54 "*"
 *   insn=0x000000000048EB54 string=0x000000000048EB58 "K"
 *   insn=0x000000000048EB58 string=0x000000000048EB5C "+"
 *   insn=0x000000000048EB6C string=0x000000000048EB70 "(a"
 *   insn=0x000000000048EB7C string=0x000000000048EB80 "J=G"
 *   insn=0x000000000048EB80 string=0x000000000048EB84 ")!"
 *   insn=0x000000000048EB88 string=0x000000000048EB8C "*"
 *   insn=0x000000000048EB8C string=0x000000000048EB90 "K"
 *   insn=0x000000000048EB90 string=0x000000000048EB94 "+"
 *   insn=0x000000000048EBA4 string=0x000000000048EBA8 "(a"
 *   insn=0x000000000048EBB4 string=0x000000000048EBB8 "J=G"
 *   insn=0x000000000048EBB8 string=0x000000000048EBBC ")!"
 *   insn=0x000000000048EBBC string=0x000000000048EBC0 "\n"
 *   insn=0x000000000048EBC0 string=0x000000000048EBC4 "*"
 *   insn=0x000000000048EBC4 string=0x000000000048EBC8 "K"
 *   insn=0x000000000048EBC8 string=0x000000000048EBCC "+"
 *   insn=0x000000000048EBF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048EBF4 string=0x000000000048EBF8 "4\t"
 *   insn=0x000000000048EBF8 string=0x000000000048EBFC "X"
 *   insn=0x000000000048EC00 string=0x000000000048EC04 "K"
 *   insn=0x000000000048EC04 string=0x000000000048EC08 "+"
 *   insn=0x000000000048EC08 string=0x000000000048EC0C "_"
 *   insn=0x000000000048EC0C string=0x000000000048EC10 "m"
 *   insn=0x000000000048EC1C string=0x000000000048EC20 "(a"
 *   insn=0x000000000048EC2C string=0x000000000048EC30 "J=G"
 *   insn=0x000000000048EC30 string=0x000000000048EC34 ")!"
 *   insn=0x000000000048EC34 string=0x000000000048EC38 "\n"
 *   insn=0x000000000048EC38 string=0x000000000048EC3C "*"
 *   insn=0x000000000048EC38 string=0x000000000048EC78 "*"
 *   insn=0x000000000048EC3C string=0x000000000048EC40 "K"
 *   insn=0x000000000048EC40 string=0x000000000048EC44 "+"
 *   insn=0x000000000048EC48 string=0x000000000048EC4C "_"
 *   insn=0x000000000048EC70 string=0x000000000048EC74 "L"
 *   insn=0x000000000048EC78 string=0x000000000048EC7C "K"
 *   insn=0x000000000048EC7C string=0x000000000048EC80 "+"
 *   insn=0x000000000048EC80 string=0x000000000048EC84 "_"
 *   insn=0x000000000048EC84 string=0x000000000048EC88 "m"
 *   insn=0x000000000048EC94 string=0x000000000048EC98 "J"
 *   insn=0x000000000048EC9C string=0x000000000048ECA0 "(a"
 *   insn=0x000000000048ECA8 string=0x000000000048ECE0 "7"
 *   insn=0x000000000048ECAC string=0x000000000048ECB0 "J=G"
 *   insn=0x000000000048ECB0 string=0x000000000048ECB4 ")!"
 *   insn=0x000000000048ECB4 string=0x000000000048ECB8 "\n"
 *   insn=0x000000000048ECB8 string=0x000000000048ECBC "*"
 *   insn=0x000000000048ECB8 string=0x000000000048ECF8 "*"
 *   insn=0x000000000048ECBC string=0x000000000048ECC0 "K"
 *   insn=0x000000000048ECC0 string=0x000000000048ECC4 "+"
 *   insn=0x000000000048ECC8 string=0x000000000048ECCC "_"
 *   insn=0x000000000048ECE4 string=0x000000000048ECE8 "r"
 *   insn=0x000000000048ECF0 string=0x000000000048ECF4 ">"
 *   insn=0x000000000048ECF8 string=0x000000000048ECFC "K"
 *   insn=0x000000000048ECFC string=0x000000000048ED00 "+"
 *   insn=0x000000000048ED00 string=0x000000000048ED04 "_"
 *   insn=0x000000000048ED04 string=0x000000000048ED08 "m"
 *   insn=0x000000000048ED14 string=0x000000000048ED18 "4"
 *   insn=0x000000000048ED1C string=0x000000000048ED20 ""
 *   insn=0x000000000048ED2C string=0x000000000048ED30 "\t@"
 *   insn=0x000000000048ED3C string=0x000000000048ED40 ""
 *   insn=0x000000000048ED4C string=0x000000000048ED50 "@"
 *   insn=0x000000000048ED5C string=0x000000000048ED60 "4"
 *   insn=0x000000000048ED64 string=0x000000000048ED68 ""
 *   insn=0x000000000048ED74 string=0x000000000048ED78 "\t@"
 *   insn=0x000000000048ED84 string=0x000000000048ED88 ""
 *   insn=0x000000000048ED94 string=0x000000000048ED98 "@"
 *   insn=0x000000000048EDA4 string=0x000000000048EDA8 "4"
 *   insn=0x000000000048EDAC string=0x000000000048EDB0 ""
 *   insn=0x000000000048EDBC string=0x000000000048EDC0 "\t@"
 *   insn=0x000000000048EDCC string=0x000000000048EDD0 ""
 *   insn=0x000000000048EDDC string=0x000000000048EDE0 "@"
 *   insn=0x000000000048EDF0 string=0x000000000048EDF4 "V"
 *   insn=0x000000000048EE18 string=0x000000000048EE1C ")"
 *   insn=0x000000000048EE28 string=0x000000000048EE2C "(A"
 *   insn=0x000000000048EE30 string=0x000000000048EE34 ""
 *   insn=0x000000000048EE48 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000048EE4C string=0x000000000048EE60 "D"
 *   insn=0x000000000048EE50 string=0x000000000048EE54 "3"
 *   insn=0x000000000048EE78 string=0x00000000001FD590 "0'"
 *   insn=0x000000000048EE80 string=0x000000000048EE84 "2"
 *   insn=0x000000000048EE84 string=0x000000000048EE88 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BasicRenderingPrograms::AddToContext(
        Caver::BasicRenderingPrograms *this,
        Caver::RenderingContext *a2)
{
  __int64 v2; // x20
  _QWORD *v3; // x21
  __int64 v4; // x9
  _QWORD *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x20
  _QWORD *v11; // x21
  __int64 v12; // x9
  _QWORD *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  void *v16; // x0
  __int64 v17; // x20
  _QWORD *v18; // x21
  __int64 v19; // x9
  _QWORD *v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  void *v23; // x0
  void *v24; // x0
  __int64 v25; // x20
  _QWORD *v26; // x21
  __int64 v27; // x9
  _QWORD *v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  void *v31; // x0
  void *v32; // x0
  void *v33; // x0
  __int64 v34; // x20
  _QWORD *v35; // x21
  __int64 v36; // x9
  _QWORD *v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  void *v40; // x0
  void *v41; // x0
  void *v42; // x0
  __int64 v43; // x20
  _QWORD *v44; // x21
  __int64 v45; // x9
  _QWORD *v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  void *v49; // x0
  void *v50; // x0
  void *v51; // x0
  void *v52; // x0
  __int64 result; // x0
  _QWORD *v54; // x19
  __int64 v55; // x8
  __int64 v56; // x8
  _QWORD *v57; // x19
  __int64 v58; // x8
  __int64 v59; // x8
  _QWORD *v60; // x19
  __int64 v61; // x8
  __int64 v62; // x8
  unsigned int *v63; // x8
  int v64; // w9
  unsigned int *v65; // x8
  int v66; // w9
  unsigned int *v67; // x8
  int v68; // w9
  unsigned int *v69; // x8
  int v70; // w9
  unsigned int *v71; // x8
  int v72; // w9
  unsigned int *v73; // x8
  int v74; // w9
  unsigned int *v75; // x8
  int v76; // w9
  unsigned int *v77; // x8
  int v78; // w9
  unsigned int *v79; // x8
  int v80; // w9
  unsigned int *v81; // x8
  int v82; // w9
  unsigned int *v83; // x8
  int v84; // w9
  unsigned int *v85; // x8
  int v86; // w9
  unsigned int *v87; // x8
  int v88; // w9
  unsigned int *v89; // x8
  int v90; // w9
  unsigned int *v91; // x8
  int v92; // w9
  __int64 v93; // [xsp+28h] [xbp-88h] BYREF
  __int64 v94; // [xsp+30h] [xbp-80h] BYREF
  _QWORD *v95; // [xsp+38h] [xbp-78h]
  __int64 v96; // [xsp+40h] [xbp-70h] BYREF
  _QWORD *v97; // [xsp+48h] [xbp-68h]
  __int64 v98; // [xsp+50h] [xbp-60h]
  _QWORD *v99; // [xsp+58h] [xbp-58h]
  __int64 v100; // [xsp+68h] [xbp-48h] BYREF
  _QWORD *v101; // [xsp+70h] [xbp-40h]
  __int64 v102; // [xsp+78h] [xbp-38h]

  v102 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v98 = 0;
  v99 = 0;
  v2 = operator new(0x40u);
  sub_566BB8((int)&v96, "POSITION");
  Caver::RenderingProgramShader::RenderingProgramShader();
  v100 = v2;
  boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>();
  boost::detail::sp_enable_shared_from_this();
  v3 = v99;
  v4 = v100;
  v100 = v98;
  v5 = v101;
  v101 = v99;
  v98 = v4;
  v99 = v5;
  if ( v101 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v8 = (void *)(v96 - 24);
  if ( (__int64 *)(v96 - 24) != &qword_6FD2E0 )
  {
    v63 = (unsigned int *)(v96 - 8);
    if ( &pthread_create )
    {
      do
        v64 = __ldaxr(v63);
      while ( __stlxr(v64 - 1, v63) );
    }
    else
    {
      v64 = (*v63)--;
    }
    if ( v64 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v100, "mvpMatrix");
  Caver::RenderingProgramShader::AddUniformVariable();
  v9 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v65 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v66 = __ldaxr(v65);
      while ( __stlxr(v66 - 1, v65) );
    }
    else
    {
      v66 = (*v65)--;
    }
    if ( v66 <= 0 )
      operator delete(v9);
  }
  v96 = 0;
  v97 = 0;
  v10 = operator new(0x40u);
  sub_566BB8((int)&v94, "WHITE");
  Caver::RenderingProgramShader::RenderingProgramShader();
  v100 = v10;
  boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>();
  boost::detail::sp_enable_shared_from_this();
  v11 = v97;
  v12 = v100;
  v100 = v96;
  v13 = v101;
  v101 = v97;
  v96 = v12;
  v97 = v13;
  if ( v101 )
  {
    v14 = v11[1] - 1LL;
    v11[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v15 = v11[2] - 1LL;
      v11[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v16 = (void *)(v94 - 24);
  if ( (__int64 *)(v94 - 24) != &qword_6FD2E0 )
  {
    v67 = (unsigned int *)(v94 - 8);
    if ( &pthread_create )
    {
      do
        v68 = __ldaxr(v67);
      while ( __stlxr(v68 - 1, v67) );
    }
    else
    {
      v68 = (*v67)--;
    }
    if ( v68 <= 0 )
      operator delete(v16);
  }
  v94 = 0;
  v95 = 0;
  v17 = operator new(0x90u);
  sub_566BB8((int)&v93, "PROGRAM_UNIFORM_COLOR");
  Caver::RenderingProgram::RenderingProgram();
  v100 = v17;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>();
  boost::detail::sp_enable_shared_from_this();
  v18 = v95;
  v19 = v100;
  v100 = v94;
  v20 = v101;
  v101 = v95;
  v94 = v19;
  v95 = v20;
  if ( v101 )
  {
    v21 = v18[1] - 1LL;
    v18[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v22 = v18[2] - 1LL;
      v18[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  v23 = (void *)(v93 - 24);
  if ( (__int64 *)(v93 - 24) != &qword_6FD2E0 )
  {
    v69 = (unsigned int *)(v93 - 8);
    if ( &pthread_create )
    {
      do
        v70 = __ldaxr(v69);
      while ( __stlxr(v70 - 1, v69) );
    }
    else
    {
      v70 = (*v69)--;
    }
    if ( v70 <= 0 )
      operator delete(v23);
  }
  sub_566BB8((int)&v100, "vertexPosition");
  Caver::RenderingProgram::AddVertexAttribute();
  v24 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v71 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v72 = __ldaxr(v71);
      while ( __stlxr(v72 - 1, v71) );
    }
    else
    {
      v72 = (*v71)--;
    }
    if ( v72 <= 0 )
      operator delete(v24);
  }
  Caver::RenderingProgram::LinkWithShaders();
  Caver::RenderingContext::AddProgram();
  v25 = operator new(0x90u);
  sub_566BB8((int)&v93, "PROGRAM_UNIFORM_COLOR_TEXTURING");
  Caver::RenderingProgram::RenderingProgram();
  v100 = v25;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>();
  boost::detail::sp_enable_shared_from_this();
  v26 = v95;
  v27 = v100;
  v100 = v94;
  v28 = v101;
  v101 = v95;
  v94 = v27;
  v95 = v28;
  if ( v101 )
  {
    v29 = v26[1] - 1LL;
    v26[1] = v29;
    if ( !v29 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v30 = v26[2] - 1LL;
      v26[2] = v30;
      if ( !v30 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v31 = (void *)(v93 - 24);
  if ( (__int64 *)(v93 - 24) != &qword_6FD2E0 )
  {
    v73 = (unsigned int *)(v93 - 8);
    if ( &pthread_create )
    {
      do
        v74 = __ldaxr(v73);
      while ( __stlxr(v74 - 1, v73) );
    }
    else
    {
      v74 = (*v73)--;
    }
    if ( v74 <= 0 )
      operator delete(v31);
  }
  sub_566BB8((int)&v100, "vertexPosition");
  Caver::RenderingProgram::AddVertexAttribute();
  v32 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v75 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v76 = __ldaxr(v75);
      while ( __stlxr(v76 - 1, v75) );
    }
    else
    {
      v76 = (*v75)--;
    }
    if ( v76 <= 0 )
      operator delete(v32);
  }
  *(_BYTE *)(v94 + 20) = 1;
  sub_566BB8((int)&v100, "texCoord");
  Caver::RenderingProgram::AddVertexAttribute();
  v33 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v77 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v78 = __ldaxr(v77);
      while ( __stlxr(v78 - 1, v77) );
    }
    else
    {
      v78 = (*v77)--;
    }
    if ( v78 <= 0 )
      operator delete(v33);
  }
  Caver::RenderingProgram::LinkWithShaders();
  Caver::RenderingContext::AddProgram();
  v34 = operator new(0x90u);
  sub_566BB8((int)&v93, "PROGRAM_VARYING_COLOR");
  Caver::RenderingProgram::RenderingProgram();
  v100 = v34;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>();
  boost::detail::sp_enable_shared_from_this();
  v35 = v95;
  v36 = v100;
  v100 = v94;
  v37 = v101;
  v101 = v95;
  v94 = v36;
  v95 = v37;
  if ( v101 )
  {
    v38 = v35[1] - 1LL;
    v35[1] = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v39 = v35[2] - 1LL;
      v35[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  v40 = (void *)(v93 - 24);
  if ( (__int64 *)(v93 - 24) != &qword_6FD2E0 )
  {
    v79 = (unsigned int *)(v93 - 8);
    if ( &pthread_create )
    {
      do
        v80 = __ldaxr(v79);
      while ( __stlxr(v80 - 1, v79) );
    }
    else
    {
      v80 = (*v79)--;
    }
    if ( v80 <= 0 )
      operator delete(v40);
  }
  sub_566BB8((int)&v100, "vertexPosition");
  Caver::RenderingProgram::AddVertexAttribute();
  v41 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v81 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v82 = __ldaxr(v81);
      while ( __stlxr(v82 - 1, v81) );
    }
    else
    {
      v82 = (*v81)--;
    }
    if ( v82 <= 0 )
      operator delete(v41);
  }
  sub_566BB8((int)&v100, "vertexColor");
  Caver::RenderingProgram::AddVertexAttribute();
  v42 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v83 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v84 = __ldaxr(v83);
      while ( __stlxr(v84 - 1, v83) );
    }
    else
    {
      v84 = (*v83)--;
    }
    if ( v84 <= 0 )
      operator delete(v42);
  }
  Caver::RenderingProgram::LinkWithShaders();
  Caver::RenderingContext::AddProgram();
  v43 = operator new(0x90u);
  sub_566BB8((int)&v93, "PROGRAM_VARYING_COLOR_TEXTURING");
  Caver::RenderingProgram::RenderingProgram();
  v100 = v43;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>();
  boost::detail::sp_enable_shared_from_this();
  v44 = v95;
  v45 = v100;
  v100 = v94;
  v46 = v101;
  v101 = v95;
  v94 = v45;
  v95 = v46;
  if ( v101 )
  {
    v47 = v44[1] - 1LL;
    v44[1] = v47;
    if ( !v47 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      v48 = v44[2] - 1LL;
      v44[2] = v48;
      if ( !v48 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 24LL))(v44);
    }
  }
  v49 = (void *)(v93 - 24);
  if ( (__int64 *)(v93 - 24) != &qword_6FD2E0 )
  {
    v85 = (unsigned int *)(v93 - 8);
    if ( &pthread_create )
    {
      do
        v86 = __ldaxr(v85);
      while ( __stlxr(v86 - 1, v85) );
    }
    else
    {
      v86 = (*v85)--;
    }
    if ( v86 <= 0 )
      operator delete(v49);
  }
  sub_566BB8((int)&v100, "vertexPosition");
  Caver::RenderingProgram::AddVertexAttribute();
  v50 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v87 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v88 = __ldaxr(v87);
      while ( __stlxr(v88 - 1, v87) );
    }
    else
    {
      v88 = (*v87)--;
    }
    if ( v88 <= 0 )
      operator delete(v50);
  }
  sub_566BB8((int)&v100, "vertexColor");
  Caver::RenderingProgram::AddVertexAttribute();
  v51 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v89 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v90 = __ldaxr(v89);
      while ( __stlxr(v90 - 1, v89) );
    }
    else
    {
      v90 = (*v89)--;
    }
    if ( v90 <= 0 )
      operator delete(v51);
  }
  *(_BYTE *)(v94 + 20) = 1;
  sub_566BB8((int)&v100, "texCoord");
  Caver::RenderingProgram::AddVertexAttribute();
  v52 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v91 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v92 = __ldaxr(v91);
      while ( __stlxr(v92 - 1, v91) );
    }
    else
    {
      v92 = (*v91)--;
    }
    if ( v92 <= 0 )
      operator delete(v52);
  }
  Caver::RenderingProgram::LinkWithShaders();
  result = Caver::RenderingContext::AddProgram();
  v54 = v95;
  if ( v95 )
  {
    v55 = v95[1] - 1LL;
    v95[1] = v55;
    if ( !v55 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
      v56 = v54[2] - 1LL;
      v54[2] = v56;
      if ( !v56 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
    }
  }
  v57 = v97;
  if ( v97 )
  {
    v58 = v97[1] - 1LL;
    v97[1] = v58;
    if ( !v58 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
      v59 = v57[2] - 1LL;
      v57[2] = v59;
      if ( !v59 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v57 + 24LL))(v57);
    }
  }
  v60 = v99;
  if ( v99 )
  {
    v61 = v99[1] - 1LL;
    v99[1] = v61;
    if ( !v61 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
      v62 = v60[2] - 1LL;
      v60[2] = v62;
      if ( !v62 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 24LL))(v60);
    }
  }
  return result;
}

