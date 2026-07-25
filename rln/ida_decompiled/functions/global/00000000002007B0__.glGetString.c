/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002007B0
 * Mangled: .glGetString
 * Demangled: .glGetString
 *
 * Callers: 2
 *   0x000000000051C420  CPVRTglesExt::LoadExtensions(void)
 *   0x000000000051C8A8  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callees: 1
 *   0x00000000006FEB60  glGetString
 *
 * Referenced strings: 1
 *   insn=0x00000000002007B8 string=0x00000000002007BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glGetString()
{
  return glGetString();
}

