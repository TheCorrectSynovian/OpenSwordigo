/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0F0
 * Mangled: .poll
 * Demangled: .poll
 *
 * Callers: 1
 *   0x000000000051F904  sub_51F904
 *
 * Callees: 1
 *   0x00000000006FE890  poll
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA0F8 string=0x00000000001FA0FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int poll(struct pollfd *fds, nfds_t nfds, int timeout)
{
  return poll(fds, nfds, timeout);
}

