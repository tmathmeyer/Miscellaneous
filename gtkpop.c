#include <gtk/gtk.h>
void main (int argc, char *argv[]) {
	gtk_init (&argc, &argv);
        GtkWidget *hello = gtk_message_dialog_new (NULL, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Hello world!");
	gtk_message_dialog_format_secondary_text (GTK_MESSAGE_DIALOG (hello), "This is an example dialog.");
        gtk_dialog_run(GTK_DIALOG (hello));
}