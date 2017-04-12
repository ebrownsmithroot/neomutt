/**
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MUTT_FILTER_H
#define _MUTT_FILTER_H 1

#include <stdio.h>
#include <unistd.h>

pid_t mutt_create_filter_fd(const char *cmd, FILE **in, FILE **out, FILE **err,
                            int fdin, int fdout, int fderr);
pid_t mutt_create_filter(const char *s, FILE **in, FILE **out, FILE **err);
int mutt_wait_filter(pid_t pid);

#endif /* _MUTT_FILTER_H */
