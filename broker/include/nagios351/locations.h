/************************************************************************
 *
 * Nagios Locations Header File
 * Written By: Ethan Galstad (egalstad@nagios.org)
 * Last Modified: 04-30-2007
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ************************************************************************/

#define DEFAULT_TEMP_FILE			"/usr/local/opmon/var/tempfile"
#define DEFAULT_TEMP_PATH                       "/tmp"
#define DEFAULT_CHECK_RESULT_PATH		"/usr/local/opmon/var/spool/checkresults"
#define DEFAULT_STATUS_FILE			"/usr/local/opmon/var/status.dat"
#define DEFAULT_LOG_FILE			"/usr/local/opmon/var/nagios.log"
#define DEFAULT_LOG_ARCHIVE_PATH		"/usr/local/opmon/var/archives/"
#define DEFAULT_DEBUG_FILE                      "/usr/local/opmon/var/nagios.debug"
#define DEFAULT_COMMENT_FILE			"/usr/local/opmon/var/comments.dat"
#define DEFAULT_DOWNTIME_FILE			"/usr/local/opmon/var/downtime.dat"
#define DEFAULT_RETENTION_FILE			"/usr/local/opmon/var/retention.dat"
#define DEFAULT_COMMAND_FILE			"/usr/local/opmon/var/rw/nagios.cmd"
#define DEFAULT_CONFIG_FILE			"/usr/local/opmon/etc/nagios.cfg"
#define DEFAULT_PHYSICAL_HTML_PATH		"/usr/local/opmon/share"
#define DEFAULT_URL_HTML_PATH			"/opmon"
#define DEFAULT_PHYSICAL_CGIBIN_PATH		"/usr/local/opmon/sbin"
#define DEFAULT_URL_CGIBIN_PATH			"/opmon/cgi-bin"
#define DEFAULT_CGI_CONFIG_FILE			"/usr/local/opmon/etc/cgi.cfg"
#define DEFAULT_LOCK_FILE			"/usr/local/opmon/var/opmon.lock"
#define DEFAULT_OBJECT_CACHE_FILE		"/usr/local/opmon/var/objects.cache"
#define DEFAULT_PRECACHED_OBJECT_FILE		"/usr/local/opmon/var/objects.precache"
#define DEFAULT_EVENT_BROKER_FILE		"/usr/local/opmon/var/broker.socket"
#define DEFAULT_P1_FILE				"/usr/local/opmon/bin/p1.pl"	/**** EMBEDDED PERL ****/
#define DEFAULT_AUTH_FILE			""			/**** EMBEDDED PERL - IS THIS USED? ****/
