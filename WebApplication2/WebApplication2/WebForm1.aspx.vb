#include<>
Public Class WebForm1
    Inherits System.Web.UI.Page

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load, Button1.Click
        HtmlPage1.open();
    End Sub

End Class