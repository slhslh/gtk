/*
 * gdkscreen.h
 *
 * Copyright 2001 Sun Microsystems Inc.
 *
 * Erwann Chenede <erwann.chenede@sun.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GDK_SCREEN_H__
#define __GDK_SCREEN_H__

#if !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif

#include <cairo.h>
#include <gdk/gdkversionmacros.h>
#include <gdk/gdktypes.h>
#include <gdk/gdkdisplay.h>

G_BEGIN_DECLS

#define GDK_TYPE_SCREEN            (gdk_screen_get_type ())
#define GDK_SCREEN(object)         (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_SCREEN, GdkScreen))
#define GDK_IS_SCREEN(object)      (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_SCREEN))


GDK_AVAILABLE_IN_ALL
GType        gdk_screen_get_type              (void) G_GNUC_CONST;

GDK_AVAILABLE_IN_ALL
GdkWindow *  gdk_screen_get_root_window       (GdkScreen   *screen);
GDK_AVAILABLE_IN_ALL
GdkDisplay * gdk_screen_get_display           (GdkScreen   *screen);

GDK_AVAILABLE_IN_ALL
GList *      gdk_screen_get_toplevel_windows  (GdkScreen   *screen);

GDK_AVAILABLE_IN_ALL
GdkScreen *gdk_screen_get_default (void);

GDK_AVAILABLE_IN_ALL
gboolean   gdk_screen_get_setting (GdkScreen   *screen,
                                   const gchar *name,
                                   GValue      *value);

GDK_AVAILABLE_IN_ALL
void    gdk_screen_set_resolution (GdkScreen *screen,
                                   gdouble    dpi);
GDK_AVAILABLE_IN_ALL
gdouble gdk_screen_get_resolution (GdkScreen *screen);

G_END_DECLS

#endif  /* __GDK_SCREEN_H__ */
